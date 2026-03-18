/*
 * XREFs of MiZeroPageFile @ 0x14066BEC0
 * Callers:
 *     MiZeroAllPageFiles @ 0x140B6236C (MiZeroAllPageFiles.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MmZeroPageWrite @ 0x140493B8C (MmZeroPageWrite.c)
 *     MiTransferMemoryPagefileData @ 0x1404D1F70 (MiTransferMemoryPagefileData.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiZeroPageFile(PVOID P)
{
  __int64 v2; // r14
  unsigned __int8 v3; // cf
  unsigned int v4; // esi
  int v5; // r13d
  KIRQL v6; // al
  int v7; // r8d
  unsigned int v8; // r15d
  KIRQL i; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v13; // [rsp+28h] [rbp-A9h]
  unsigned __int64 v14; // [rsp+30h] [rbp-A1h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-99h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-91h]
  struct _MDL MemoryDescriptorList; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v18[16]; // [rsp+78h] [rbp-59h] BYREF

  memset_0(&MemoryDescriptorList, 0, 0xB0uLL);
  v2 = *((_QWORD *)P + 4);
  Event = (PRKEVENT)*((_QWORD *)P + 5);
  ExFreePoolWithTag(P, 0);
  v3 = _bittest16((const signed __int16 *)(v2 + 172), 0xBu);
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 0LL;
  if ( v3 )
  {
    *(_DWORD *)&MemoryDescriptorList.Size = 131120;
    memset64(v18, (unsigned __int64)qword_140E37340[0], 0x10uLL);
  }
  else
  {
    *(_DWORD *)&MemoryDescriptorList.Size = 48;
  }
  v13 = 0;
  v4 = 0;
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 200));
  v7 = *(_DWORD *)v2;
  v8 = 1;
  for ( i = v6; v8 < *(_DWORD *)v2; ++v8 )
  {
    if ( _bittest64(*(const signed __int64 **)(*(_QWORD *)(v2 + 80) + 16LL), v8) )
    {
      if ( v4 )
        goto LABEL_13;
    }
    else
    {
      v10 = v8;
      if ( v4 )
        v10 = v13;
      ++v4;
      v13 = v10;
      if ( v4 == 16 || v8 == v7 - 1 )
        v5 = 1;
    }
    if ( v5 )
    {
LABEL_13:
      MiReleaseSpinLockExclusive((_DWORD *)(v2 + 200), i);
      if ( _bittest16((const signed __int16 *)(v2 + 172), 0xBu) )
      {
        MemoryDescriptorList.ByteCount = v4 << 12;
        MiTransferMemoryPagefileData(v2, (__int64)&MemoryDescriptorList, v13, 0);
      }
      else
      {
        v11 = *(_QWORD *)(v2 + 24);
        v15 = (unsigned __int64)v13 << 12;
        v14 = (unsigned __int64)v4 << 12;
        MmZeroPageWrite(v11, &v15, (__int64 *)&v14, 0);
      }
      v5 = 0;
      i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 200));
      v4 = 0;
    }
    v7 = *(_DWORD *)v2;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v2 + 200), i);
  if ( _bittest16((const signed __int16 *)(v2 + 172), 0xBu) && (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return KeSetEvent(Event, 0, 0);
}
