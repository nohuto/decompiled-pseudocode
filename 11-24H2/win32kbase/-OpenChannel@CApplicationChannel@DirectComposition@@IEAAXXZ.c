/*
 * XREFs of ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14006D880
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x14006D30C (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x140070F20 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x14006DA08 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x14006DA5C (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::OpenChannel(struct _EPROCESS ***this)
{
  struct _EPROCESS **v2; // rdi
  struct _EPROCESS **v3; // rcx
  char *v4; // rsi
  void *v5; // rax
  struct _EPROCESS **v6; // rcx
  bool v7; // cf
  int v8; // eax
  int v9; // eax
  DirectComposition::CConnection *v10; // rcx
  BOOL v11; // ecx
  int v12; // [rsp+20h] [rbp-18h]
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 329),
    *this[5]);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v2 = this[24];
  this[24] = (struct _EPROCESS **)*v2;
  *v2 = 0LL;
  *((_DWORD *)v2 + 5) = 5;
  v3 = this[334];
  v2[17] = (struct _EPROCESS *)this[333];
  v2[18] = (struct _EPROCESS *)v3;
  ++*((_DWORD *)this + 672);
  v4 = (char *)v2[18] + *((_QWORD *)v2[17] + 7);
  *((_DWORD *)v4 + 4) = *((_DWORD *)this + 7);
  *((_DWORD *)v4 + 5) = *((_DWORD *)this + 684);
  *((_QWORD *)v4 + 3) = this[341];
  v5 = 0LL;
  v6 = this[29];
  v13 = 0LL;
  if ( v6 )
  {
    if ( (int)OpenDwmHandle(v6[1], (POBJECT_TYPE)ExEventObjectType, 2u, v12, &v13) < 0 )
    {
      v5 = 0LL;
      v13 = 0LL;
    }
    else
    {
      v5 = v13;
    }
  }
  *((_QWORD *)v4 + 4) = v5;
  v7 = v13 != 0LL;
  *((_BYTE *)this + 267) = 0;
  *((_BYTE *)this + 265) = (v7 ? 0x10 : 0) | *((_BYTE *)this + 265) & 0xEF;
  v8 = *((_DWORD *)this + 102) + 1;
  *((_DWORD *)this + 102) = v8;
  *((_BYTE *)v2 + 32) &= ~1u;
  *((_DWORD *)v2 + 4) = v8;
  v9 = *((_DWORD *)this + 102);
  v10 = (DirectComposition::CConnection *)this[5];
  ++*((_DWORD *)this + 63);
  *((_DWORD *)this + 103) = v9;
  DirectComposition::CConnection::PostBatch(
    v10,
    (struct DirectComposition::CBatch *)v2,
    (struct DirectComposition::CBatch *)v2);
  v11 = *((_BYTE *)this[5] + 253) != 0;
  *((_BYTE *)this + 264) |= 0x40u;
  *((_BYTE *)this + 48) |= 2u;
  *((_DWORD *)this + 673) = v11;
  *((_DWORD *)this + 6) = 0;
}
