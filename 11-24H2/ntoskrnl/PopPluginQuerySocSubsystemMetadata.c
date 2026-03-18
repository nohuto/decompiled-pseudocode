/*
 * XREFs of PopPluginQuerySocSubsystemMetadata @ 0x14074F88C
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x140985A6C (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14074F4D8 (PopFxValidateReturnedUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1409862A0 (RtlHashUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall PopPluginQuerySocSubsystemMetadata(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r12d
  ULONG_PTR v5; // rbp
  char v7; // r14
  __int64 v8; // rsi
  _BYTE *Pool2; // r15
  _BYTE *v10; // rdi
  signed __int64 v11; // r8
  __int64 v12; // r9
  _OWORD **v13; // rdx
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // rcx
  __int64 i; // rsi
  __int128 v19; // [rsp+20h] [rbp-38h]
  __int64 HashValue; // [rsp+60h] [rbp+8h] BYREF

  HashValue = a1;
  v3 = *(_DWORD *)(a3 + 28);
  v5 = PopFxProcessorPlugin;
  LODWORD(HashValue) = 0;
  v7 = 0;
  v8 = v3;
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v10 = (_BYTE *)ExAllocatePool2(0x100uLL);
    if ( v10 )
    {
      v19 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      if ( v3 )
      {
        v13 = (_OWORD **)(a3 + 32);
        v11 = Pool2 - v10;
        v14 = v10;
        do
        {
          *(_OWORD *)((char *)v14 + v11) = **v13;
          v15 = *v13++;
          *v14++ = v15[1];
          --v8;
        }
        while ( v8 );
      }
      v7 = guard_dispatch_icall_no_overrides(40LL, a3, v11, v12);
      if ( !v7 )
        PopFxBugCheck(0x605uLL, 0x28uLL, PopFxProcessorPlugin, 0LL);
      RtlHashUnicodeString(*(PCUNICODE_STRING *)(a3 + 16), 0, 0, (PULONG)&HashValue);
      v16 = *(_QWORD *)(a3 + 16);
      if ( *(_DWORD *)v16 != (_DWORD)v19 || *(_QWORD *)(v16 + 8) != *((_QWORD *)&v19 + 1) || (_DWORD)HashValue != a2 )
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
               *(_QWORD *)&v10[16 * (unsigned int)i + 8],
               *(unsigned __int16 *)&v10[16 * (unsigned int)i + 2]);
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
