/*
 * XREFs of NtFreeUserPhysicalPages @ 0x1407F9BD0
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 *     MiGetAweInfoPartition @ 0x1403CCDEC (MiGetAweInfoPartition.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiReturnProcessCommitment @ 0x1404561A4 (MiReturnProcessCommitment.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     MiReferenceAweHandle @ 0x1404D61C4 (MiReferenceAweHandle.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140682854 (MiPreparePhysicalPagesMdlForFree.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiCaptureUlongPtrArray @ 0x1407F9304 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __fastcall NtFreeUserPhysicalPages(HANDLE Handle, unsigned __int64 *a2, void *a3)
{
  unsigned __int64 *v3; // r15
  int v5; // ebx
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v7; // r12
  __int64 v8; // rcx
  NTSTATUS result; // eax
  __int64 v10; // r14
  struct _MDL *p_Mdl; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  _KPROCESS *v14; // rdi
  int v15; // r14d
  __int64 v16; // rcx
  IRP *Irp; // r8
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  struct _MDL *v20; // rcx
  struct _KTHREAD *v21; // rax
  __int64 ByteOffset; // rax
  __int64 ByteCount; // rax
  __int64 AweInfoPartition; // r10
  unsigned __int64 v25; // rax
  __int64 ProcessPartition; // rax
  __int64 v27; // r9
  __int64 v28; // r10
  __int16 v29; // ax
  bool v30; // zf
  char v31; // al
  __int64 v32; // rax
  void *v33; // rcx
  KPROCESSOR_MODE v34; // [rsp+30h] [rbp-1138h]
  PVOID Object; // [rsp+38h] [rbp-1130h] BYREF
  __int64 v36; // [rsp+40h] [rbp-1128h]
  __int64 v37; // [rsp+48h] [rbp-1120h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-1118h]
  void *Src; // [rsp+58h] [rbp-1110h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-1108h]
  unsigned __int64 *v41; // [rsp+68h] [rbp-1100h]
  _KPROCESS *Process; // [rsp+70h] [rbp-10F8h]
  unsigned __int64 v43; // [rsp+78h] [rbp-10F0h]
  __int64 v44; // [rsp+80h] [rbp-10E8h]
  __int64 v45; // [rsp+88h] [rbp-10E0h]
  __int64 v46; // [rsp+90h] [rbp-10D8h]
  __int128 v47; // [rsp+A0h] [rbp-10C8h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-10B8h]
  _OWORD v49[3]; // [rsp+B8h] [rbp-10B0h] BYREF
  struct _MDL Mdl; // [rsp+F0h] [rbp-1078h] BYREF

  Src = a3;
  v3 = a2;
  v41 = a2;
  memset(v49, 0, sizeof(v49));
  memset_0(&Mdl, 0, 0x1030uLL);
  Object = 0LL;
  v37 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v34 = PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v3 < 0x7FFFFFFF0000LL )
      v8 = (__int64)v3;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v7 = *v3;
    v38 = *v3;
    *v3 = 0LL;
  }
  else
  {
    v7 = *v3;
    v38 = *v3;
  }
  if ( !v7 )
    return -1073741584;
  v10 = 0LL;
  v36 = 0LL;
  p_Mdl = &Mdl;
  result = MiReferenceAweHandle(Handle, 2u, PreviousMode, &Object, &v37);
  v12 = 0LL;
  if ( result >= 0 )
  {
    v13 = v37;
    if ( v37 )
    {
      v10 = *(_QWORD *)(MiSectionControlArea(v37) + 8);
      v36 = v10;
    }
    else
    {
      v14 = (_KPROCESS *)Object;
      if ( Object )
        goto LABEL_14;
      v5 = 4;
    }
    v14 = Process;
    Object = Process;
LABEL_14:
    v43 = v12;
    if ( v10 || (v10 = v14[2].ActiveProcessors[4].StaticBitmap[4], (v36 = v10) != 0) )
    {
      v16 = MiPageChainCount(v10);
      v44 = v16;
      p_Mdl = (struct _MDL *)Irp;
      v18 = 512LL;
      if ( v7 > 0x200 )
      {
        v19 = 786432LL;
        if ( v16 != 1 )
          v19 = 0xFFFFFLL;
        v18 = v7;
        if ( v7 > v19 )
          v18 = v19;
        while ( v18 > 0x200 )
        {
          p_Mdl = IoAllocateMdl(0LL, (_DWORD)v18 << 12, 0, 0, Irp);
          Irp = 0LL;
          if ( p_Mdl )
          {
            v5 |= 8u;
            break;
          }
          v18 >>= 1;
        }
      }
      if ( !p_Mdl )
      {
        p_Mdl = &Mdl;
        v18 = 512LL;
      }
      while ( 1 )
      {
        if ( v18 > v7 )
          v18 = v7;
        p_Mdl->Next = (struct _MDL *)Irp;
        p_Mdl->Size = 8 * ((((v18 << 12) + 4095) >> 12) + 6);
        p_Mdl->MdlFlags = (__int16)Irp;
        p_Mdl->StartVa = Irp;
        p_Mdl->ByteOffset = (unsigned int)Irp;
        p_Mdl->ByteCount = (_DWORD)v18 << 12;
        v5 &= ~1u;
        v20 = p_Mdl + 1;
        if ( v34 == (_BYTE)Irp )
        {
          memmove(v20, Src, 8 * v18);
        }
        else
        {
          v15 = MiCaptureUlongPtrArray(v20, (unsigned int *)Src, v18);
          if ( v15 < 0 )
            goto LABEL_64;
          v10 = v36;
        }
        v21 = CurrentThread;
        if ( CurrentThread->ApcState.Process != v14 )
        {
          KiStackAttachProcess(v14, 0, (__int64)v49);
          v5 |= 1u;
          v21 = CurrentThread;
        }
        if ( !v13 )
        {
          LOCK_ADDRESS_SPACE((__int64)v21, (__int64)v14);
          if ( (v14[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            break;
        }
        v15 = MiBuildPhysicalPageFreeChain(v10, (__int64)p_Mdl, (__int64)&v47);
        ByteOffset = p_Mdl->ByteOffset;
        v46 = ByteOffset;
        Irp = 0LL;
        if ( ByteOffset )
        {
          if ( !v13 )
            MiReturnProcessCommitment((__int64)v14, v44 * (unsigned int)ByteOffset);
          v43 += v18;
        }
        if ( !v13 )
        {
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v14);
          Irp = 0LL;
        }
        ByteCount = p_Mdl->ByteCount;
        v45 = ByteCount;
        if ( ByteCount )
        {
          if ( v44 == 1 )
          {
            p_Mdl->MdlFlags |= 2u;
            p_Mdl->ByteCount = (_DWORD)ByteCount << 12;
            MiPreparePhysicalPagesMdlForFree((__int64)p_Mdl, 1uLL);
            MiFreePagesFromMdl((ULONG_PTR)p_Mdl, 0, 0, v36);
            AweInfoPartition = MiGetAweInfoPartition(v36);
            v25 = -v45;
            _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 19624), -v45);
            v13 = v37;
            if ( !v37 )
            {
              _InterlockedAdd64((volatile signed __int64 *)Object + 174, v25);
              v13 = v37;
            }
            ProcessPartition = MiGetProcessPartition((__int64)Process);
            if ( v28 != ProcessPartition )
            {
              MiReturnCrossPartitionCharges(v28, 4u, 1, v27);
              Irp = 0LL;
            }
            v14 = (_KPROCESS *)Object;
            v7 = v38;
          }
          else
          {
            MiFreePhysicalPageChain(v36, (_QWORD **)&v47);
            Irp = 0LL;
          }
        }
        v7 -= v46;
        v38 = v7;
        if ( v15 || !v7 )
          goto LABEL_64;
        if ( (v5 & 1) != 0 )
        {
          KiUnstackDetachProcess((__int64)v49, 0);
          v5 &= ~1u;
          Irp = 0LL;
        }
        if ( (IRP *)v14[1].ReadyTime == Irp )
          goto LABEL_61;
        v29 = WORD2(v14[3].PerProcessorCycleTimes);
        if ( v29 == 332 || (v30 = v29 == 452, v31 = (char)Irp, v30) )
          v31 = 1;
        v30 = v31 == 0;
        v32 = 4LL;
        if ( v30 )
LABEL_61:
          v32 = 8LL;
        Src = (char *)Src + v18 * v32;
        v10 = v36;
      }
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v14);
      v15 = -1073741558;
LABEL_64:
      v3 = v41;
    }
    else
    {
      v15 = -1073741585;
    }
    if ( (v5 & 8) != 0 )
    {
      p_Mdl->MdlFlags &= ~2u;
      IoFreeMdl(p_Mdl);
    }
    if ( (v5 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v49, 0);
    if ( (v5 & 4) == 0 )
    {
      v33 = (void *)v13;
      if ( !v13 )
        v33 = v14;
      ObfDereferenceObjectWithTag(v33, 0x68506D4Du);
    }
    *v3 = v43;
    return v15;
  }
  return result;
}
