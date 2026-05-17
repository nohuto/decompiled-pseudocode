/*
 * XREFs of sxsisol_RespectDotLocal @ 0x18010BDCC
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlDoesFileExists_UstrEx @ 0x180076D70 (RtlDoesFileExists_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x18008B0C0 (RtlpEnsureBufferSize.c)
 *     RtlComputePrivatizedDllName_U @ 0x18010BF40 (RtlComputePrivatizedDllName_U.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v5; // ebx
  unsigned __int16 v7; // ax
  __int128 *v8; // r14
  unsigned __int64 v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // rcx
  size_t v12; // r8
  const void *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v5 = RtlComputePrivatizedDllName_U(a1, &v16, &v17);
    if ( v5 < 0 )
      goto LABEL_8;
    if ( *((_QWORD *)&v17 + 1) && RtlDoesFileExists_UstrEx((unsigned __int16 *)&v17, 1) )
    {
      v7 = v17;
      v8 = &v17;
    }
    else
    {
      if ( !*((_QWORD *)&v16 + 1) || !RtlDoesFileExists_UstrEx((unsigned __int16 *)&v16, 1) )
      {
LABEL_7:
        v5 = 0;
        goto LABEL_8;
      }
      v7 = v16;
      v8 = &v16;
    }
    v9 = v7 + 2LL;
    *a2 = 0;
    if ( v9 <= 0xFFFE )
    {
      v10 = (__int64 *)(a2 + 8);
      if ( a2 != (unsigned __int16 *)-16LL && v9 <= *((_QWORD *)a2 + 4)
        || (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v9) >= 0 )
      {
        v11 = *v10;
        v12 = *(unsigned __int16 *)v8;
        v13 = (const void *)*((_QWORD *)v8 + 1);
        v14 = (unsigned __int64)*a2 >> 1;
        *((_QWORD *)a2 + 1) = *v10;
        memmove((void *)(v11 + 2 * v14), v13, v12);
        v15 = (unsigned __int16)(*a2 + *(_WORD *)v8);
        *a2 = v15;
        a2[1] = v15 + 2;
        *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v15 >> 1)) = 0;
        if ( a3 )
          *a3 |= 1u;
        goto LABEL_7;
      }
      v5 = -1073741801;
    }
    else
    {
      v5 = -1073741562;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_8:
  if ( *((_QWORD *)&v16 + 1) )
  {
    RtlpSysVolFree(*((__int64 *)&v16 + 1));
    v16 = 0LL;
  }
  if ( *((_QWORD *)&v17 + 1) )
    RtlpSysVolFree(*((__int64 *)&v17 + 1));
  return (unsigned int)v5;
}
