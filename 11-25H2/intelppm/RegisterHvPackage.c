/*
 * XREFs of RegisterHvPackage @ 0x140029000
 * Callers:
 *     <none>
 * Callees:
 *     GetHvProcessorInfo @ 0x140006830 (GetHvProcessorInfo.c)
 *     InitializeHvPhysicalCores @ 0x14000BE24 (InitializeHvPhysicalCores.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     GetHvPackage @ 0x140030038 (GetHvPackage.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  unsigned int v2; // edi
  __int64 HvProcessorInfo; // rax
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 HvPackage; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  int v12; // edi
  int v13; // ebx

  v2 = -1073741823;
  HvProcessorInfo = GetHvProcessorInfo(*(_DWORD *)(a1 + 72));
  if ( HvProcessorInfo )
  {
    v4 = *(_DWORD *)(HvProcessorInfo + 8);
    v5 = *(_DWORD *)(HvProcessorInfo + 4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_140019188,
      0LL);
    v6 = qword_1400191E8;
    if ( (__int64 *)qword_1400191E8 == &qword_1400191E8 )
      goto LABEL_6;
    do
    {
      v7 = v6;
      if ( *(_DWORD *)(v6 + 32) == v4 )
        break;
      v6 = *(_QWORD *)v6;
      v7 = 0LL;
    }
    while ( (__int64 *)v6 != &qword_1400191E8 );
    if ( !v7 )
    {
LABEL_6:
      HvPackage = GetHvPackage(v4);
      v7 = HvPackage;
      if ( !HvPackage )
      {
LABEL_13:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_140019188);
        return v2;
      }
      KeInitializeAffinityEx2(HvPackage + 48, 32LL);
      v9 = (__int64 *)qword_1400191F0;
      if ( *(__int64 **)qword_1400191F0 != &qword_1400191E8 )
LABEL_15:
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = qword_1400191F0;
      *(_QWORD *)v7 = &qword_1400191E8;
      *v9 = v7;
      qword_1400191F0 = v7;
      *(_QWORD *)(v7 + 328) = v7 + 320;
      *(_QWORD *)(v7 + 320) = v7 + 320;
    }
    *(_QWORD *)(a1 + 1080) = v7;
    ++*(_DWORD *)(v7 + 40);
    if ( !*(_DWORD *)(a1 + 80) )
      KeAddProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56));
    v10 = *(_QWORD **)(v7 + 24);
    v11 = (_QWORD *)(a1 + 1088);
    if ( *v10 == v7 + 16 )
    {
      *(_QWORD *)(a1 + 1096) = v10;
      *v11 = v7 + 16;
      *v10 = v11;
      *(_QWORD *)(v7 + 24) = v11;
      v12 = *(_DWORD *)(v7 + 40);
      v13 = *(_DWORD *)(v7 + 36);
      InitializeHvPhysicalCores(a1, v5);
      v2 = v13 != v12 ? 0x103 : 0;
      goto LABEL_13;
    }
    goto LABEL_15;
  }
  return v2;
}
