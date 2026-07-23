/*
 * XREFs of PopPluginQuerySocSubsystemMetadata @ 0x14074DBBC
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x14096E27C (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14074D808 (PopFxValidateReturnedUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14096EAB0 (RtlHashUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PopPluginQuerySocSubsystemMetadata(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r12d
  ULONG_PTR v5; // rbp
  char v7; // r14
  __int64 v8; // rsi
  _BYTE *Pool2; // r15
  unsigned __int16 *v10; // rdi
  _OWORD **v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int64 i; // rsi
  __int128 v17; // [rsp+20h] [rbp-38h]
  __int64 HashValue; // [rsp+60h] [rbp+8h] BYREF

  HashValue = a1;
  v3 = *(_DWORD *)(a3 + 28);
  v5 = PopFxProcessorPlugin;
  LODWORD(HashValue) = 0;
  v7 = 0;
  v8 = v3;
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, 16LL * v3, 0x4D584650u);
  if ( Pool2 )
  {
    v10 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, 16LL * v3, 0x4D584650u);
    if ( v10 )
    {
      v17 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      if ( v3 )
      {
        v11 = (_OWORD **)(a3 + 32);
        v12 = v10;
        do
        {
          *(_OWORD *)((char *)v12 + Pool2 - (_BYTE *)v10) = **v11;
          v13 = *v11++;
          *v12++ = v13[1];
          --v8;
        }
        while ( v8 );
      }
      v7 = guard_dispatch_icall_no_overrides(40LL, a3);
      if ( !v7 )
        PopFxBugCheck(0x605uLL, 0x28uLL, PopFxProcessorPlugin, 0LL);
      RtlHashUnicodeString(*(PCUNICODE_STRING *)(a3 + 16), 0, 0, (PULONG)&HashValue);
      v14 = *(_QWORD *)(a3 + 16);
      if ( *(_DWORD *)v14 != (_DWORD)v17 || *(_QWORD *)(v14 + 8) != *((_QWORD *)&v17 + 1) || (_DWORD)HashValue != a2 )
        PopFxBugCheck(0x705uLL, v5, 0x28uLL, 0x534E616DuLL);
      for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
      {
        if ( !PopFxValidateReturnedUnicodeString(
                *(unsigned __int16 **)(a3 + 8 * i + 32),
                *(_QWORD *)&Pool2[16 * (unsigned int)i + 8],
                *(unsigned __int16 *)&Pool2[16 * (unsigned int)i + 2]) )
          PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *(_QWORD *)(a3 + 8 * i + 32) + 8LL);
        v7 = PopFxValidateReturnedUnicodeString(
               (unsigned __int16 *)(*(_QWORD *)(a3 + 8 * i + 32) + 16LL),
               *(_QWORD *)&v10[8 * (unsigned int)i + 4],
               v10[8 * (unsigned int)i + 1]);
        if ( !v7 )
          PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *(_QWORD *)(a3 + 8 * i + 32) + 24LL);
      }
    }
    ExFreePoolWithTag(Pool2, 0x4D584650u);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4D584650u);
  }
  return v7;
}
