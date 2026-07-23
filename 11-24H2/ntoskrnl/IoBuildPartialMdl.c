/*
 * XREFs of IoBuildPartialMdl @ 0x1403852A0
 * Callers:
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x140383954 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14038B860 (HalpDmaCheckMdlAccessibility.c)
 *     IopMcCreatePartialMdl @ 0x1407177F4 (IopMcCreatePartialMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall IoBuildPartialMdl(PMDL SourceMdl, PMDL TargetMdl, PVOID VirtualAddress, ULONG Length)
{
  ULONG_PTR BugCheckParameter4; // rbx
  char *v8; // rcx
  __int64 ByteCount; // rdi
  unsigned __int64 v10; // r8
  __int16 v11; // r8
  unsigned int v12; // edx
  CSHORT MdlFlags; // cx
  int v14; // edi
  void *v15; // r9
  CSHORT v16; // cx
  unsigned __int64 v17; // rdx
  char *v18; // rax
  signed __int64 v19; // r10

  BugCheckParameter4 = Length;
  v8 = (char *)SourceMdl->StartVa + SourceMdl->ByteOffset;
  ByteCount = SourceMdl->ByteCount;
  v10 = (unsigned __int64)&v8[ByteCount];
  if ( SLOBYTE(SourceMdl->MdlFlags) >= 0 )
    v10 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( VirtualAddress < v8
    || VirtualAddress >= &v8[ByteCount]
    || (char *)VirtualAddress + BugCheckParameter4 < VirtualAddress
    || (unsigned __int64)VirtualAddress + BugCheckParameter4 > v10 )
  {
    KeBugCheckEx(0x12Eu, (ULONG_PTR)SourceMdl, (ULONG_PTR)TargetMdl, (ULONG_PTR)VirtualAddress, BugCheckParameter4);
  }
  v11 = (__int16)VirtualAddress;
  TargetMdl->Process = SourceMdl->Process;
  v12 = (_DWORD)VirtualAddress - (_DWORD)v8;
  MdlFlags = TargetMdl->MdlFlags;
  v14 = ByteCount - v12;
  if ( !(_DWORD)BugCheckParameter4 )
    LODWORD(BugCheckParameter4) = v14;
  TargetMdl->ByteOffset = (unsigned __int16)VirtualAddress & 0xFFF;
  v15 = (void *)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  TargetMdl->StartVa = v15;
  v16 = MdlFlags & 8;
  TargetMdl->ByteCount = BugCheckParameter4;
  LODWORD(v15) = (_DWORD)v15 - LODWORD(SourceMdl->StartVa);
  TargetMdl->MdlFlags = v16;
  TargetMdl->MdlFlags = v16 | SourceMdl->MdlFlags & 0x48C5 | 0x10;
  TargetMdl->MappedSystemVa = (char *)SourceMdl->MappedSystemVa + v12;
  v17 = ((v11 & 0xFFF) + 4095LL + (unsigned __int64)(unsigned int)BugCheckParameter4) >> 12;
  v18 = (char *)(&SourceMdl[1].Next + ((unsigned int)v15 >> 12));
  if ( v17 )
  {
    v19 = (char *)TargetMdl - v18;
    do
    {
      *(_QWORD *)&v18[v19 + 48] = *(_QWORD *)v18;
      v18 += 8;
      --v17;
    }
    while ( v17 );
  }
}
