/*
 * XREFs of PopReadPagesFromHiberFile @ 0x140AAC0F0
 * Callers:
 *     PopReadResumeContext @ 0x140AABF98 (PopReadResumeContext.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IoPageRead @ 0x1404F8A10 (IoPageRead.c)
 *     RtlLongLongAdd @ 0x1405D1038 (RtlLongLongAdd.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadPagesFromHiberFile(unsigned int a1, unsigned int a2, PVOID *a3)
{
  struct _MDL *v4; // rsi
  char v5; // r15
  ULONG_PTR v6; // r12
  unsigned __int64 v7; // rax
  ULONG v8; // r13d
  signed int Status; // edi
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // rcx
  ULONG_PTR v12; // r11
  void *Pool2; // rax
  struct _MDL *Mdl; // rax
  struct _MDL *v16; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+38h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  v16 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !byte_140F0B668
    || (char *)PopHiberInfo - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
    || (unsigned __int64)&FileObject[-1].FileObjectExtension + 7 > 0xFFFFFFFFFFFFFFFDuLL
    || (v6 = qword_140F0BB90, qword_140F0BB90 < 0x1000) )
  {
    Status = -1073741637;
    goto LABEL_26;
  }
  v7 = (unsigned __int64)a2 << 12;
  v8 = -1;
  if ( v7 <= 0xFFFFFFFF )
    v8 = a2 << 12;
  Status = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v7 <= 0xFFFFFFFF )
  {
    StartingOffset.QuadPart = 0LL;
    v10 = a1 * (unsigned __int128)0x1000u;
    v11 = -1LL;
    if ( (v10 & 0x8000000000000000uLL) == 0LL )
    {
      if ( !*((_QWORD *)&v10 + 1) )
      {
LABEL_13:
        v11 = v10;
        StartingOffset.QuadPart = v10;
        Status = 0;
        goto LABEL_14;
      }
    }
    else if ( *((_QWORD *)&v10 + 1) == -1LL )
    {
      goto LABEL_13;
    }
    StartingOffset.QuadPart = -1LL;
    Status = -1073741675;
LABEL_14:
    if ( Status >= 0 )
    {
      Status = RtlLongLongAdd(v11, v8, (unsigned __int64 *)&v16);
      if ( Status >= 0 )
      {
        if ( (unsigned __int64)v16 <= v6 )
        {
          Pool2 = (void *)ExAllocatePool2(0x100uLL, v12, 0x206D654Du);
          *a3 = Pool2;
          if ( Pool2 )
          {
            Mdl = IoAllocateMdl(Pool2, v8, 0, 0, 0LL);
            v4 = Mdl;
            v16 = Mdl;
            if ( Mdl )
            {
              MmProbeAndLockPages(Mdl, 0, IoReadAccess);
              v5 = 1;
              KeInitializeEvent(&Event, NotificationEvent, 0);
              Status = IoPageRead(FileObject, v4, &StartingOffset, &Event, &IoStatusBlock);
              if ( Status == 259 )
              {
                Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                if ( Status >= 0 )
                  Status = IoStatusBlock.Status;
              }
            }
            else
            {
              Status = -1073741670;
            }
          }
          else
          {
            Status = -1073741801;
          }
        }
        else
        {
          Status = -1073741807;
        }
      }
    }
  }
LABEL_26:
  if ( v5 )
    MmUnlockPages(v4);
  if ( v4 )
    IoFreeMdl(v4);
  if ( Status < 0 && *a3 )
  {
    ExFreePoolWithTag(*a3, 0x206D654Du);
    *a3 = 0LL;
  }
  return (unsigned int)Status;
}
