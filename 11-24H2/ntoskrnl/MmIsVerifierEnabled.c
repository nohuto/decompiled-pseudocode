/*
 * XREFs of MmIsVerifierEnabled @ 0x140B84D50
 * Callers:
 *     <none>
 * Callees:
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  __int64 v1; // rdx
  NTSTATUS v3; // r9d
  char v5; // r8
  unsigned int v6; // r11d
  __int64 v7; // r10
  ULONG v8; // r8d
  ULONG *v9; // rdi
  unsigned int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = -1073741637;
  if ( !VerifierFlags )
    return -1073741811;
  if ( (_DWORD)VfRuleClasses )
  {
    if ( (unsigned int)VfDriverIsKernelImageAddress(retaddr, v1, VfRuleClasses, 3221225659LL) )
    {
      if ( (v5 & 2) != 0 )
      {
        *VerifierFlags = 2;
        return 0;
      }
      return v3;
    }
    while ( 1 )
    {
      if ( v6 >= 8 )
        return v3;
      v7 = 32LL * v6;
      v8 = *(_DWORD *)((char *)&unk_140E08F78 + v7);
      if ( v8 )
      {
        if ( (v8 & (unsigned int)VfRuleClasses) == 0 )
          goto LABEL_16;
        v9 = (ULONG *)((char *)&unk_140E08F7C + v7);
      }
      else
      {
        v9 = (ULONG *)((char *)&unk_140E08F7C + v7);
        v10 = *(_DWORD *)((char *)&unk_140E08F7C + v7);
        if ( v10 >= 0x40 )
          goto LABEL_16;
        v11 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)v10 >> 5));
        if ( !_bittest(&v11, *(_DWORD *)((_BYTE *)&unk_140E08F7C + v7) & 0x1F) )
          goto LABEL_16;
      }
      v12 = *(_QWORD *)((char *)&unk_140E08F68 + v7);
      if ( retaddr > v12 && retaddr < *(_QWORD *)((char *)&unk_140E08F70 + v7) + v12 )
      {
        if ( !v8 )
          v8 = *v9;
        *VerifierFlags = v8;
        return 0;
      }
LABEL_16:
      ++v6;
    }
  }
  return v3;
}
