/*
 * XREFs of MiZeroPageWrite @ 0x14025FE14
 * Callers:
 *     CcZeroDataOnDisk @ 0x140260430 (CcZeroDataOnDisk.c)
 *     MmZeroPageWrite @ 0x1402604EC (MmZeroPageWrite.c)
 * Callees:
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     IoSynchronousPageWriteEx @ 0x14025BD80 (IoSynchronousPageWriteEx.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MiIsRetryIoStatus @ 0x140260570 (MiIsRetryIoStatus.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiZeroPageWrite(struct _FILE_OBJECT *a1, LARGE_INTEGER *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  PMDL p_Mdl; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v11; // r12
  PMDL v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r13
  CSHORT v17; // ax
  PVOID *p_Next; // rcx
  __int64 v19; // rdx
  NTSTATUS Status; // r15d
  int v22; // [rsp+40h] [rbp-C0h]
  __int16 v23; // [rsp+48h] [rbp-B8h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER *v25; // [rsp+68h] [rbp-98h]
  struct _IO_STATUS_BLOCK v26; // [rsp+70h] [rbp-90h] BYREF
  struct _FILE_OBJECT *v27; // [rsp+80h] [rbp-80h]
  struct _MDL Mdl; // [rsp+90h] [rbp-70h] BYREF

  HIDWORD(v26.Pointer) = 0;
  v5 = a3;
  v25 = a2;
  v27 = a1;
  v23 = a3;
  Object.Header.Reserved1 = 0;
  memset_0(&Mdl, 0, 0xB0uLL);
  p_Mdl = 0LL;
  v7 = (unsigned int)v5;
  v8 = (unsigned __int64)(v5 + 4095) >> 12;
  if ( a4 && (unsigned int)v5 > a4 )
    v7 = a4;
  if ( (unsigned int)v7 > 0x10000 )
    p_Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  v9 = (unsigned __int64)(v7 + 4095) >> 12;
  if ( p_Mdl )
  {
    MdlFlags = p_Mdl->MdlFlags;
  }
  else
  {
    MdlFlags = 0;
    p_Mdl = &Mdl;
    if ( (unsigned int)v9 > 0x10 )
      LODWORD(v9) = 16;
  }
  v22 = 0;
  v11 = MdlFlags | 0x4002;
  v12 = p_Mdl + 1;
  LODWORD(v13) = v9;
  while ( 1 )
  {
    v14 = v8;
    if ( (unsigned int)v13 <= (unsigned int)v8 )
      v14 = v13;
    v13 = v14;
    v15 = v14 << 12;
    if ( (_DWORD)v8 == v14 )
    {
      LODWORD(v9) = v8;
      if ( (v5 & 0xFFF) != 0 )
        v15 = (v5 & 0xFFF | (unsigned int)v15) - 4096;
    }
    v16 = (unsigned int)v15;
    p_Mdl->ByteCount = v15;
    v17 = 8 * (((unsigned __int64)(v15 + 4095) >> 12) + 6);
    p_Next = (PVOID *)&v12->Next;
    p_Mdl->Next = 0LL;
    p_Mdl->Size = v17;
    p_Mdl->StartVa = 0LL;
    p_Mdl->ByteOffset = 0;
    p_Mdl->MdlFlags = v11;
    if ( (_DWORD)v13 )
    {
      v19 = v13;
      do
      {
        *p_Next++ = qword_140E37480[0];
        --v19;
      }
      while ( v19 );
    }
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    v26.Status = 0;
    v26.Information = 0LL;
    Object.Header.Size = 6;
    Status = IoSynchronousPageWriteEx(v27, p_Mdl, v25, &Object, 0, 0LL, &v26);
    if ( Status >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      Status = v26.Status;
    }
    if ( _bittest16(&p_Mdl->MdlFlags, 9u) )
      MiRetardMdl((__int64)p_Mdl);
    if ( (p_Mdl->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(p_Mdl->MappedSystemVa, p_Mdl);
    if ( Status < 0 )
      break;
    LODWORD(v8) = v8 - v13;
    v25->QuadPart += v16;
    if ( v22 )
    {
      --v22;
    }
    else if ( (unsigned int)v13 < (unsigned int)v9 )
    {
      LODWORD(v13) = v9;
    }
LABEL_24:
    v12 = p_Mdl + 1;
    if ( !(_DWORD)v8 )
      goto LABEL_27;
    LOWORD(v5) = v23;
  }
  v22 = 8;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)Status, v16) && (_DWORD)v13 != 1 )
  {
    LODWORD(v13) = (unsigned int)v13 >> 1;
    goto LABEL_24;
  }
LABEL_27:
  if ( p_Mdl != &Mdl )
    IoFreeMdl(p_Mdl);
  return (unsigned int)Status;
}
