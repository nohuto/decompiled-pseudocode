/*
 * XREFs of RegisterHvPackage @ 0x1400266D0
 * Callers:
 *     <none>
 * Callees:
 *     GetHvProcessorInfo @ 0x140006584 (GetHvProcessorInfo.c)
 *     InitializeHvPhysicalCores @ 0x1400065C0 (InitializeHvPhysicalCores.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  unsigned int v2; // edi
  __int64 HvProcessorInfo; // rax
  int v4; // ebp
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 Pool2; // rax
  int v9; // edx
  _QWORD *v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // r8
  bool v13; // zf
  int v14; // ecx
  __int64 *v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  int v18; // edi
  int v19; // ebx

  v2 = -1073741823;
  HvProcessorInfo = GetHvProcessorInfo(*(_DWORD *)(a1 + 72));
  if ( HvProcessorInfo )
  {
    v4 = *(_DWORD *)(HvProcessorInfo + 8);
    v5 = *(_DWORD *)(HvProcessorInfo + 4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1400145A8,
      0LL);
    v6 = qword_140014608;
    if ( (__int64 *)qword_140014608 == &qword_140014608 )
      goto LABEL_6;
    do
    {
      v7 = v6;
      if ( *(_DWORD *)(v6 + 32) == v4 )
        break;
      v6 = *(_QWORD *)v6;
      v7 = 0LL;
    }
    while ( (__int64 *)v6 != &qword_140014608 );
    if ( !v7 )
    {
LABEL_6:
      Pool2 = ExAllocatePool2(64LL, 344LL, 1919119952LL);
      v7 = Pool2;
      if ( !Pool2 )
      {
LABEL_18:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1400145A8);
        return v2;
      }
      *(_DWORD *)(Pool2 + 32) = v4;
      v9 = 0;
      v10 = (_QWORD *)(Pool2 + 16);
      v10[1] = v10;
      *v10 = v10;
      if ( dword_140014B40 )
      {
        v11 = (unsigned int)dword_140014B40;
        v12 = (_DWORD *)(qword_140014B38 + 8);
        do
        {
          v13 = v4 == *v12;
          v14 = v9 + 1;
          v12 += 3;
          if ( !v13 )
            v14 = v9;
          v9 = v14;
          --v11;
        }
        while ( v11 );
      }
      *(_DWORD *)(v7 + 36) = v9;
      KeInitializeAffinityEx2(v7 + 48, 32LL);
      v15 = (__int64 *)qword_140014610;
      if ( *(__int64 **)qword_140014610 != &qword_140014608 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = qword_140014610;
      *(_QWORD *)v7 = &qword_140014608;
      *v15 = v7;
      qword_140014610 = v7;
      *(_QWORD *)(v7 + 328) = v7 + 320;
      *(_QWORD *)(v7 + 320) = v7 + 320;
    }
    *(_QWORD *)(a1 + 1080) = v7;
    ++*(_DWORD *)(v7 + 40);
    if ( !*(_DWORD *)(a1 + 80) )
      KeAddProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56));
    v16 = *(_QWORD **)(v7 + 24);
    v17 = (_QWORD *)(a1 + 1088);
    if ( *v16 == v7 + 16 )
    {
      *v17 = v7 + 16;
      *(_QWORD *)(a1 + 1096) = v16;
      *v16 = v17;
      *(_QWORD *)(v7 + 24) = v17;
      v18 = *(_DWORD *)(v7 + 40);
      v19 = *(_DWORD *)(v7 + 36);
      InitializeHvPhysicalCores(a1, v5);
      v2 = v19 != v18 ? 0x103 : 0;
      goto LABEL_18;
    }
    goto LABEL_20;
  }
  return v2;
}
