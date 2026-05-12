/*
 * XREFs of StorQueryMFNDCapability @ 0x14018EC48
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorValidateMFNDCapabilities @ 0x140067C90 (StorValidateMFNDCapabilities.c)
 *     StorLogIdentifyMFNDFailure @ 0x1400C45DC (StorLogIdentifyMFNDFailure.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorGetMFNDCapabilities @ 0x14018E4C4 (StorGetMFNDCapabilities.c)
 */

__int64 __fastcall StorQueryMFNDCapability(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v4; // rax
  _DWORD *v6; // rbx
  size_t v8; // r14
  __int64 v9; // rcx
  int MFNDCapabilities; // eax
  unsigned __int8 *v12; // rdi
  unsigned int v13; // esi
  _OWORD *v14; // rax
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v16) = a4;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = *(_DWORD **)(a2 + 24);
  P = 0LL;
  v16 = 0;
  v8 = *(unsigned int *)(v4 + 8);
  *a3 = 0LL;
  if ( !StorIsMFNDSupported(a1) )
    return 3221225659LL;
  if ( v8 < 0x60 )
    return 3221225507LL;
  MFNDCapabilities = StorGetMFNDCapabilities(v9, &P, &v16);
  v12 = (unsigned __int8 *)P;
  v13 = MFNDCapabilities;
  if ( MFNDCapabilities < 0 )
    goto LABEL_9;
  if ( P )
  {
    if ( StorValidateMFNDCapabilities((__int64)P) )
    {
      memset_0(v6, 0, v8);
      *v6 = 6291457;
      *((_WORD *)v6 + 2) = v12[4];
      *((_WORD *)v6 + 3) = v12[5];
      *(_OWORD *)(v6 + 2) = *(_OWORD *)(v12 + 8);
      *(_OWORD *)(v6 + 6) = *(_OWORD *)(v12 + 24);
      *(_OWORD *)(v6 + 10) = *(_OWORD *)(v12 + 40);
      *(_OWORD *)(v6 + 14) = *(_OWORD *)(v12 + 56);
      *((_BYTE *)v6 + 72) = v12[72];
      if ( v12[73] )
      {
        switch ( v12[73] )
        {
          case 1u:
            v6[19] = 2;
            break;
          case 2u:
            v6[19] = 3;
            break;
          case 3u:
            v6[19] = 4;
            break;
          case 4u:
            v6[19] = 5;
            break;
          default:
            v6[19] = 0;
            break;
        }
      }
      else
      {
        v6[19] = 1;
      }
      if ( v12[74] )
      {
        switch ( v12[74] )
        {
          case 1u:
            v6[20] = 2;
            break;
          case 2u:
            v6[20] = 3;
            break;
          case 3u:
            v6[20] = 4;
            break;
          case 4u:
            v6[20] = 5;
            break;
          default:
            v6[20] = 0;
            break;
        }
      }
      else
      {
        v6[20] = 1;
      }
      if ( v12[75] )
      {
        if ( v12[75] == 1 )
        {
          v6[21] = 2;
        }
        else if ( v12[75] == 2 )
        {
          v6[21] = 3;
        }
        else
        {
          v6[21] = 0;
        }
      }
      else
      {
        v6[21] = 1;
      }
      if ( v12[76] )
      {
        if ( v12[76] == 1 )
        {
          *((_BYTE *)v6 + 73) = 2;
        }
        else if ( v12[76] == 2 )
        {
          *((_BYTE *)v6 + 73) = 3;
        }
        else
        {
          *((_BYTE *)v6 + 73) = 0;
        }
      }
      else
      {
        *((_BYTE *)v6 + 73) = 1;
      }
      v14 = *(_OWORD **)(a1 + 6152);
      *a3 = 96LL;
      if ( v14 )
      {
        *v14 = *(_OWORD *)v12;
        v14[1] = *((_OWORD *)v12 + 1);
        v14[2] = *((_OWORD *)v12 + 2);
        v14[3] = *((_OWORD *)v12 + 3);
        v14[4] = *((_OWORD *)v12 + 4);
        v14[5] = *((_OWORD *)v12 + 5);
        v14[6] = *((_OWORD *)v12 + 6);
        v14[7] = *((_OWORD *)v12 + 7);
      }
      goto LABEL_10;
    }
    v13 = -1073741436;
LABEL_9:
    StorLogIdentifyMFNDFailure(a1, v13, v16);
LABEL_10:
    if ( v12 )
      ExFreePoolWithTag(v12, 0x464D6152u);
  }
  return v13;
}
