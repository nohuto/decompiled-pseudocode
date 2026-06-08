/*
 * XREFs of RegisterKernelPackage @ 0x1400382B0
 * Callers:
 *     <none>
 * Callees:
 *     InitializePhysicalCores @ 0x14000DB1C (InitializePhysicalCores.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RegisterKernelPackage(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 Pool2; // rax
  unsigned int v7; // ebx
  __int64 *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  int v11; // edi
  int v12; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019188,
    0LL);
  if ( *(_DWORD *)(a1 + 80) )
    v2 = HalPrivateDispatchTable[144](*(unsigned int *)(a1 + 84));
  else
    v2 = ((__int64 (__fastcall *)(_QWORD))qword_140019570)(*(unsigned int *)(a1 + 56));
  v3 = v2;
  v4 = qword_1400191E8;
  if ( (__int64 *)qword_1400191E8 == &qword_1400191E8 )
    goto LABEL_8;
  do
  {
    v5 = v4;
    if ( *(_DWORD *)(v4 + 32) == v3 )
      break;
    v4 = *(_QWORD *)v4;
    v5 = 0LL;
  }
  while ( (__int64 *)v4 != &qword_1400191E8 );
  if ( !v5 )
  {
LABEL_8:
    Pool2 = ExAllocatePool2(64LL, 344LL, 1919119952LL);
    v5 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_16;
    }
    *(_DWORD *)(Pool2 + 32) = v3;
    *(_DWORD *)(Pool2 + 36) = ((__int64 (__fastcall *)(_QWORD))qword_140019578)(v3);
    *(_DWORD *)(v5 + 36) += HalPrivateDispatchTable[145](v3);
    KeInitializeAffinityEx2(v5 + 48, 32LL);
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *(_QWORD *)(v5 + 16) = v5 + 16;
    *(_QWORD *)(v5 + 328) = v5 + 320;
    *(_QWORD *)(v5 + 320) = v5 + 320;
    v8 = (__int64 *)qword_1400191F0;
    if ( *(__int64 **)qword_1400191F0 != &qword_1400191E8 )
LABEL_17:
      __fastfail(3u);
    *(_QWORD *)v5 = &qword_1400191E8;
    *(_QWORD *)(v5 + 8) = v8;
    *v8 = v5;
    qword_1400191F0 = v5;
  }
  *(_QWORD *)(a1 + 1080) = v5;
  ++*(_DWORD *)(v5 + 40);
  v9 = (_QWORD *)(a1 + 1088);
  v10 = *(_QWORD **)(v5 + 24);
  if ( *v10 != v5 + 16 )
    goto LABEL_17;
  *v9 = v5 + 16;
  *(_QWORD *)(a1 + 1096) = v10;
  *v10 = v9;
  *(_QWORD *)(v5 + 24) = v9;
  if ( !*(_DWORD *)(a1 + 80) )
    KeAddProcessorAffinityEx(v5 + 48, *(unsigned int *)(a1 + 56));
  v11 = *(_DWORD *)(v5 + 40);
  v12 = *(_DWORD *)(v5 + 36);
  InitializePhysicalCores(a1);
  v7 = v12 != v11 ? 0x103 : 0;
LABEL_16:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  return v7;
}
