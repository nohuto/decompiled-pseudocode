/*
 * XREFs of ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14069D578
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14069E738 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14069DE14 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SC_GPT::CreatePartitionTable(SC_GPT *this, struct _CREATE_DISK *a2)
{
  __int128 v4; // xmm0
  DWORD MaxPartitionCount; // eax
  _DWORD v7[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v8; // [rsp+28h] [rbp-D0h]
  DWORD v9; // [rsp+48h] [rbp-B0h]

  memset_0(v7, 0, 0xC0uLL);
  v4 = *(_OWORD *)&a2->Mbr.Signature;
  MaxPartitionCount = a2->Gpt.MaxPartitionCount;
  v7[1] = 0;
  v7[0] = 1;
  v8 = v4;
  v9 = MaxPartitionCount;
  return SC_GPT::WritePartitionTable(this, (struct SC_DISK_LAYOUT *)v7, 1u);
}
