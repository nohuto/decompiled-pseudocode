/*
 * XREFs of RaidGetTcgProperties @ 0x14008CF80
 * Callers:
 *     RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl @ 0x140030E98 (RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl.c)
 *     RaidGetStorageAdapterSelfEncryptionProperty @ 0x1400658C8 (RaidGetStorageAdapterSelfEncryptionProperty.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x14007B66C (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x14007BBD0 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x14007C21C (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x14007C7A8 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x14007CDC0 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x14007D338 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x14007E2FC (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x14007E850 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x14007EE34 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x14007F3E0 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x14007F980 (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x14007FF0C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x140080484 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140080ADC (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x14008108C (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400816AC (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140081C48 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x140082C44 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1400831B4 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1400837CC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x140083DA0 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x140084368 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     RaidGetTcgConfigInformation @ 0x14008C7E8 (RaidGetTcgConfigInformation.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer @ 0x140086E88 (McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer.c)
 *     TcglibDiscoverDevice @ 0x14013BF5C (TcglibDiscoverDevice.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidGetTcgProperties(int *a1, char *a2)
{
  int v2; // eax
  char v3; // r13
  int *v4; // rsi
  void *Pool; // rbp
  _WORD *v8; // rbx
  int *v9; // r14
  __int64 v10; // r15
  int v11; // edi
  unsigned int v12; // ecx
  char v14; // [rsp+D0h] [rbp-88h]
  __int128 v15; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+100h] [rbp-58h] BYREF

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( v2 == 1431193940 )
  {
    v4 = a1;
    if ( (*((_BYTE *)a1 + 507) & 0x40) == 0 )
    {
      Pool = (void *)*((_QWORD *)a1 + 448);
      v8 = (_WORD *)*((_QWORD *)a1 + 449);
      v9 = (int *)*((_QWORD *)a1 + 3);
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  if ( v2 != 1094997074 )
    return (unsigned int)-1073741637;
  v9 = a1;
  if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  Pool = (void *)*((_QWORD *)a1 + 757);
  v8 = (_WORD *)*((_QWORD *)a1 + 758);
LABEL_7:
  v10 = *((_QWORD *)a1 + 1);
  if ( !Pool )
  {
    Pool = (void *)RaidAllocatePool(256LL, 6240LL, 1129603410LL, *((_QWORD *)a1 + 1));
    if ( !Pool )
      return (unsigned int)-1073741801;
    v14 = 1;
  }
  memset_0(Pool, 0, 0x1860uLL);
  if ( v8 )
    goto LABEL_15;
  v8 = (_WORD *)RaidAllocatePool(256LL, 168LL, 1129603410LL, v10);
  if ( v8 )
  {
    v3 = 1;
LABEL_15:
    memset_0(v8, 0, 0xA8uLL);
    v11 = TcglibDiscoverDevice(a1, Pool, v8);
    if ( v11 >= 0 )
    {
      if ( *(_DWORD *)v8 == 512
        && *((_BYTE *)v8 + 52)
        && *((_BYTE *)v8 + 64)
        && *((_BYTE *)v8 + 121)
        && (v12 = *((_DWORD *)v8 + 18), *((_DWORD *)v8 + 32) >= v12)
        && *((_BYTE *)v8 + 148)
        && !*((_BYTE *)v8 + 126)
        && !*((_BYTE *)v8 + 127)
        && !(*((_DWORD *)v8 + 35) % *((_DWORD *)v8 + 36))
        && (unsigned __int16)v8[68] >= v12 )
      {
        if ( v4 )
        {
          if ( !*((_QWORD *)v4 + 448) )
            *((_QWORD *)v4 + 448) = Pool;
          if ( !*((_QWORD *)v4 + 449) )
            *((_QWORD *)v4 + 449) = v8;
        }
        else
        {
          if ( !*((_QWORD *)v9 + 757) )
            *((_QWORD *)v9 + 757) = Pool;
          if ( !*((_QWORD *)v9 + 758) )
            *((_QWORD *)v9 + 758) = v8;
        }
        Pool = 0LL;
        v8 = 0LL;
      }
      else
      {
        if ( v4 )
          *((_BYTE *)v4 + 507) |= 0x40u;
        else
          *((_BYTE *)v9 + 111) |= 0x10u;
        RaidDriverGetName(*((_QWORD *)v9 + 2), (__int64)&v15);
        if ( (byte_140171467 & 2) != 0 )
        {
          if ( v4 )
            McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              *((_BYTE *)v4 + 104),
              *((_BYTE *)v4 + 105),
              *((_BYTE *)v4 + 106),
              (__int64)(v4 + 526),
              (__int64)(v9 + 1266),
              *((const wchar_t **)&v15 + 1),
              (const char *)v4 + 168,
              (const char *)v4 + 177,
              (const char *)v4 + 242,
              *((const wchar_t **)v9 + 635),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
          else
            McTemplateK0quuujjzssszhtttqqtuuqqh_EtwWriteTransfer(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              255,
              255,
              255,
              (__int64)&v16,
              (__int64)(v9 + 1266),
              *((const wchar_t **)&v15 + 1),
              byte_140151064,
              byte_140151064,
              byte_140151064,
              *((const wchar_t **)v9 + 635),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
        }
        v11 = -1073741637;
      }
    }
    else
    {
      RtlStringCbCopyA(a2, 0x20uLL, "TcglibDiscoverDevice");
    }
    if ( v3 && v8 )
      ExFreePoolWithTag(v8, 0x43546152u);
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_48:
  if ( v14 && Pool )
    ExFreePoolWithTag(Pool, 0x43546152u);
  return (unsigned int)v11;
}
