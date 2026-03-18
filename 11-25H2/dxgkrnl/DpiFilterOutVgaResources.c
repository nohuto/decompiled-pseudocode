/*
 * XREFs of DpiFilterOutVgaResources @ 0x1402435FC
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x14023ADA0 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiDetermineResourceListSize @ 0x140242E70 (DpiDetermineResourceListSize.c)
 */

__int64 __fastcall DpiFilterOutVgaResources(__int64 a1, _DWORD *a2, _QWORD *a3, char a4)
{
  unsigned int v4; // r14d
  unsigned __int8 (__fastcall *v8)(_QWORD, __int64, __int64, int *, __int64 *); // rax
  unsigned __int8 (__fastcall *v9)(__int64, __int64, __int64, int *, __int64 *); // rax
  __int64 v10; // rcx
  unsigned __int8 (__fastcall *v11)(__int64, __int64, __int64, int *, __int64 *); // rax
  __int64 v12; // rcx
  unsigned int v13; // r15d
  size_t v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  unsigned int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+48h] [rbp-8h]
  int v27; // [rsp+4Ch] [rbp-4h]
  int v28; // [rsp+98h] [rbp+48h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+50h] BYREF
  int v30; // [rsp+A8h] [rbp+58h] BYREF

  v28 = 0;
  v4 = 0;
  v23 = 960LL;
  v24 = 655360LL;
  v29 = 944LL;
  if ( a4 == 1 )
  {
    v8 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, int *, __int64 *))(a1 + 592);
    if ( v8 )
    {
      v30 = 0;
      if ( !v8(*(_QWORD *)(a1 + 568), 655360LL, 0x20000LL, &v30, &v24) )
        v24 = 655360LL;
      v9 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, int *, __int64 *))(a1 + 592);
      v10 = *(_QWORD *)(a1 + 568);
      v30 = 1;
      if ( !v9(v10, v29, 12LL, &v30, &v29) )
        v29 = 944LL;
      v11 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, int *, __int64 *))(a1 + 592);
      v12 = *(_QWORD *)(a1 + 568);
      v30 = 1;
      if ( !v11(v12, v23, 32LL, &v30, &v23) )
        v23 = 960LL;
    }
  }
  v13 = a2[4];
  DpiDetermineResourceListSize(a2, &v28);
  v27 = 0;
  v25 = 1LL;
  v26 = 32;
  v14 = (unsigned int)(v28 - 60);
  v15 = (_DWORD *)ExAllocatePool3(256LL, v14, 1953656900LL, &v25, 1);
  v16 = v15;
  if ( v15 )
  {
    memset(v15, 0, v14);
    v16[1] = a2[1];
    v17 = 0;
    v16[2] = a2[2];
    v18 = 0;
    *v16 = 1;
    v16[3] = 65537;
    v16[4] = v13 - 3;
    while ( v17 < v13 )
    {
      v19 = *(_QWORD *)&a2[5 * v17 + 6];
      if ( v19 != v24 && v19 != v29 && v19 != v23 )
      {
        if ( v18 == v13 - 3 )
        {
          v4 = -1073741823;
          ExFreePoolWithTag(v16, 0);
          v16 = 0LL;
          break;
        }
        v20 = ++v18;
        v21 = 5 * v20;
        LODWORD(v20) = a2[5 * v17 + 9];
        *(_OWORD *)&v16[v21] = *(_OWORD *)&a2[5 * v17 + 5];
        v16[v21 + 4] = v20;
      }
      ++v17;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  *a3 = v16;
  return v4;
}
