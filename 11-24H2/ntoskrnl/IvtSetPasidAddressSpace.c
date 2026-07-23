/*
 * XREFs of IvtSetPasidAddressSpace @ 0x14056E740
 * Callers:
 *     <none>
 * Callees:
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1404F322C (IvtBuildScalableModePasidTableS1Entry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IvtEnsureNoPendingFaults @ 0x14056B71C (IvtEnsureNoPendingFaults.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056CAC8 (IvtInvalidateScalableModePasidCache.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtSetPasidAddressSpace(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int64 a4, _BYTE *a5)
{
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int16 v16; // xmm2_2
  ULONG_PTR *v17; // rax
  unsigned int v19; // eax
  int v21; // [rsp+40h] [rbp-F8h]
  __int64 v22; // [rsp+48h] [rbp-F0h]
  __int64 v23; // [rsp+50h] [rbp-E8h]
  __int64 v24; // [rsp+58h] [rbp-E0h]
  __int128 v26; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v27[8]; // [rsp+B0h] [rbp-88h] BYREF

  memset_0(v27, 0, sizeof(v27));
  v10 = *(_QWORD *)(a2 + 64);
  v11 = a4 >> 12;
  v12 = (unsigned __int64)(a3 & 0x3F) << 6;
  v13 = *(unsigned int *)(v10 + 44);
  v22 = (a3 >> 6) & 0x3FFF;
  v23 = v10;
  v21 = *(_DWORD *)(v10 + 44);
  v14 = *(_QWORD *)(v10 + 8 * v22 + 64);
  v15 = *(_QWORD *)(v14 + v12);
  v16 = _mm_srli_si128(*(__m128i *)(v14 + v12), 8).m128i_u16[0];
  v26 = *(_OWORD *)(v14 + v12 + 16);
  LODWORD(v14) = *(_OWORD *)(v14 + v12) & 1;
  v24 = (unsigned int)v14;
  if ( (_DWORD)v14 && (unsigned __int64)v26 >> 12 == v11 && v16 == v13 )
  {
    if ( a5 )
      *a5 = 0;
  }
  else
  {
    if ( !v11 )
    {
      v17 = (ULONG_PTR *)IvtEnsureNoPendingFaults(a1, a3);
      if ( v17 )
        KeBugCheckEx(0x159u, 0x1000uLL, (ULONG_PTR)v17, *v17, v17[1]);
      LOWORD(v13) = v21;
    }
    IvtBuildScalableModePasidTableS1Entry((__int64)a1, 1, v11, v9, 0, v13, v27);
    _RCX = v12 + *(_QWORD *)(v23 + 8 * v22 + 64);
    __asm { movdir64b rcx, zmmword ptr [rsp+138h+var_88] }
    if ( v24 )
    {
      v19 = 0x10000;
      if ( ((v15 >> 6) & 7) - 1 <= 1 )
        v19 = v16;
      IvtInvalidateScalableModePasidCache((__int64)a1, **(_DWORD **)(a2 + 56), v19, a3, 0, 0, 0);
    }
    if ( a5 )
      *a5 = 1;
  }
  return 0LL;
}
