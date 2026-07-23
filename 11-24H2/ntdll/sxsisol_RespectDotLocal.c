/*
 * XREFs of sxsisol_RespectDotLocal @ 0x18010679C
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180070DA0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlDoesFileExists_UstrEx @ 0x180093650 (RtlDoesFileExists_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x1800A6B80 (RtlpEnsureBufferSize.c)
 *     RtlComputePrivatizedDllName_U @ 0x180106910 (RtlComputePrivatizedDllName_U.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(_UNICODE_STRING *a1, unsigned __int16 *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  unsigned __int16 Length; // ax
  _UNICODE_STRING *p_LocalName; // r14
  SIZE_T v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // rcx
  size_t v12; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _UNICODE_STRING RealName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING LocalName; // [rsp+30h] [rbp-10h] BYREF

  RealName = 0LL;
  LocalName = 0LL;
  if ( a2 )
  {
    v5 = RtlComputePrivatizedDllName_U(a1, &RealName, &LocalName);
    if ( v5 < 0 )
      goto LABEL_8;
    if ( LocalName.Buffer && RtlDoesFileExists_UstrEx(&LocalName.Length, 1) )
    {
      Length = LocalName.Length;
      p_LocalName = &LocalName;
    }
    else
    {
      if ( !RealName.Buffer || !RtlDoesFileExists_UstrEx(&RealName.Length, 1) )
      {
LABEL_7:
        v5 = 0;
        goto LABEL_8;
      }
      Length = RealName.Length;
      p_LocalName = &RealName;
    }
    v9 = Length + 2LL;
    *a2 = 0;
    if ( v9 <= 0xFFFE )
    {
      v10 = (__int64 *)(a2 + 8);
      if ( a2 != (unsigned __int16 *)-16LL && v9 <= *((_QWORD *)a2 + 4)
        || (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v9) >= 0 )
      {
        v11 = *v10;
        v12 = p_LocalName->Length;
        Buffer = p_LocalName->Buffer;
        v14 = (unsigned __int64)*a2 >> 1;
        *((_QWORD *)a2 + 1) = *v10;
        memmove((void *)(v11 + 2 * v14), Buffer, v12);
        v15 = (unsigned __int16)(*a2 + p_LocalName->Length);
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
  if ( RealName.Buffer )
  {
    RtlpSysVolFree(RealName.Buffer);
    RealName = 0LL;
  }
  if ( LocalName.Buffer )
    RtlpSysVolFree(LocalName.Buffer);
  return (unsigned int)v5;
}
