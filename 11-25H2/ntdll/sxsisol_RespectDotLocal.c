/*
 * XREFs of sxsisol_RespectDotLocal @ 0x1800A0C84
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800A0DF0 (RtlComputePrivatizedDllName_U.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A2500 (RtlDoesFileExists_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(_UNICODE_STRING *a1, unsigned __int16 *a2, _DWORD *a3)
{
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  unsigned __int16 Length; // ax
  _UNICODE_STRING *p_LocalName; // r14
  unsigned __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // rcx
  size_t v13; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _UNICODE_STRING RealName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING LocalName; // [rsp+30h] [rbp-10h] BYREF

  RealName = 0LL;
  LocalName = 0LL;
  if ( a2 )
  {
    v6 = RtlComputePrivatizedDllName_U(a1, &RealName, &LocalName);
    if ( v6 < 0 )
      goto LABEL_8;
    if ( LocalName.Buffer && (LOBYTE(v5) = 1, (unsigned __int8)RtlDoesFileExists_UstrEx(&LocalName, v5)) )
    {
      Length = LocalName.Length;
      p_LocalName = &LocalName;
    }
    else
    {
      if ( !RealName.Buffer || (LOBYTE(v5) = 1, !(unsigned __int8)RtlDoesFileExists_UstrEx(&RealName, v5)) )
      {
LABEL_7:
        v6 = 0;
        goto LABEL_8;
      }
      Length = RealName.Length;
      p_LocalName = &RealName;
    }
    v10 = Length + 2LL;
    *a2 = 0;
    if ( v10 <= 0xFFFE )
    {
      v11 = (__int64 *)(a2 + 8);
      if ( a2 != (unsigned __int16 *)-16LL && v10 <= *((_QWORD *)a2 + 4)
        || (int)RtlpEnsureBufferSize(0LL, a2 + 8, v10) >= 0 )
      {
        v12 = *v11;
        v13 = p_LocalName->Length;
        Buffer = p_LocalName->Buffer;
        v15 = (unsigned __int64)*a2 >> 1;
        *((_QWORD *)a2 + 1) = *v11;
        memmove((void *)(v12 + 2 * v15), Buffer, v13);
        v16 = (unsigned __int16)(*a2 + p_LocalName->Length);
        *a2 = v16;
        a2[1] = v16 + 2;
        *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v16 >> 1)) = 0;
        if ( a3 )
          *a3 |= 1u;
        goto LABEL_7;
      }
      v6 = -1073741801;
    }
    else
    {
      v6 = -1073741562;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_8:
  if ( RealName.Buffer )
  {
    RtlpSysVolFree(RealName.Buffer);
    RealName = 0LL;
  }
  if ( LocalName.Buffer )
    RtlpSysVolFree(LocalName.Buffer);
  return (unsigned int)v6;
}
