/*
 * XREFs of StorQueryMFNDNamespacePageMap @ 0x140190768
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorLogMFNDQueryNSPageMap @ 0x1400C5BF8 (StorLogMFNDQueryNSPageMap.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x140190DD8 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorQueryMFNDNamespacePageMap(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  _WORD *v5; // rdi
  char v8; // r15
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rcx
  char v13; // cl
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  unsigned int v19; // ebx
  unsigned int *Pool; // r15
  __int64 v21; // rcx
  int v22; // edx
  int v23; // eax
  size_t v24; // r8
  unsigned int v26; // [rsp+68h] [rbp-31h]
  unsigned __int64 Size; // [rsp+70h] [rbp-29h]
  _DWORD v28[10]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+B0h] [rbp+17h]
  unsigned int v31; // [rsp+B4h] [rbp+1Bh]
  unsigned int v32; // [rsp+BCh] [rbp+23h]
  char v33; // [rsp+108h] [rbp+6Fh]
  int MFNDChildPFGlobalProperty; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0LL;
  v5 = *(_WORD **)(a2 + 24);
  Size = *(unsigned int *)(v3 + 8);
  memset_0(v28, 0, 0x40uLL);
  v33 = 0;
  v8 = 0;
  *a3 = 0LL;
  if ( StorIsMFNDSupported((__int64)a1) )
  {
    if ( *(_DWORD *)(a1[770] + 36) != 1 )
    {
      MFNDChildPFGlobalProperty = -1073741436;
      goto LABEL_48;
    }
    if ( *(_DWORD *)(v3 + 16) < 0x28u )
    {
      MFNDChildPFGlobalProperty = -1073741585;
      goto LABEL_48;
    }
    if ( v5[4] == 1
      && *((_DWORD *)v5 + 3) >= 0x20u
      && (v9 = *((_DWORD *)v5 + 4)) != 0
      && v9 < 3
      && v5[10]
      && *((_DWORD *)v5 + 8) )
    {
      if ( !v5 )
      {
        v10 = -1073741811;
LABEL_15:
        MFNDChildPFGlobalProperty = v10;
        goto LABEL_48;
      }
      MFNDChildPFGlobalProperty = StorRetrieveMFNDChildPFGlobalProperty();
      v11 = MFNDChildPFGlobalProperty;
      if ( MFNDChildPFGlobalProperty >= 0 )
      {
        v12 = *(_QWORD *)(a1[770] + 40);
        if ( !v12 )
          goto LABEL_45;
        v13 = *(_BYTE *)(v12 + 2);
        if ( !v13 )
          goto LABEL_45;
        v14 = *((_DWORD *)v5 + 4);
        v15 = 1 << v13;
        if ( v14 == 1 )
        {
          v8 = *(_BYTE *)(a1[769] + 73);
        }
        else if ( v14 == 2 )
        {
          v8 = *(_BYTE *)(a1[769] + 74);
        }
        v16 = 4096 << v8;
        if ( !v15 || !v16 || v16 < v15 )
        {
LABEL_45:
          v10 = -1073741668;
          goto LABEL_15;
        }
        v17 = v16 / v15;
        if ( *((_QWORD *)v5 + 3) % (unsigned __int64)(unsigned int)(32 * v17) )
        {
          MFNDChildPFGlobalProperty = -1073741584;
          goto LABEL_48;
        }
        v26 = *((_DWORD *)v5 + 8);
        if ( v26 % (unsigned int)v17 )
        {
          MFNDChildPFGlobalProperty = -1073741583;
          goto LABEL_48;
        }
        v18 = ((unsigned __int64)(v26 / (unsigned int)v17) + 7) >> 3;
        if ( Size < (unsigned int)(v18 + 20) )
        {
          MFNDChildPFGlobalProperty = -1073741789;
          goto LABEL_48;
        }
        v33 = 1;
        MFNDChildPFGlobalProperty = StorMFNDAttemptSwitchToAdminPrivilege((__int64)a1);
        v11 = MFNDChildPFGlobalProperty;
        if ( MFNDChildPFGlobalProperty >= 0 )
        {
          v19 = v18 + 4;
          Pool = (unsigned int *)RaidAllocatePool(64LL, (unsigned int)(v18 + 4), 1179476306LL, a1[1]);
          if ( !Pool )
          {
            MFNDChildPFGlobalProperty = -1073741670;
            goto LABEL_48;
          }
          v21 = *((_QWORD *)v5 + 3);
          v22 = *((_DWORD *)v5 + 4);
          v28[0] = v28[0] & 0xFFFFFF00 | 0xD2;
          v28[1] = (unsigned __int16)v5[10];
          v23 = *((_DWORD *)v5 + 8) - 1;
          v29 = v21;
          v30 = v23;
          v31 = v19 >> 2;
          LOBYTE(v32) = 9;
          if ( v22 == 1 )
          {
            v32 &= 0xFFFFF0FF;
          }
          else if ( v22 == 2 )
          {
            v32 = v32 & 0xFFFFF0FF | 0x100;
          }
          MFNDChildPFGlobalProperty = StorSendMFNDCommand((_DWORD)a1, (_DWORD)Pool, 0, v19, (__int64)v28);
          v11 = MFNDChildPFGlobalProperty;
          if ( MFNDChildPFGlobalProperty >= 0 )
          {
            memset_0(v5, 0, Size);
            if ( (_DWORD)v17 * 8 * *Pool == 8 * v17 * ((8 * v17 + (unsigned __int64)v26 - 1) / (8 * v17)) )
            {
              *v5 = 1;
              *((_DWORD *)v5 + 2) = 1;
              v24 = *Pool;
              *((_DWORD *)v5 + 4) = *Pool;
              *((_DWORD *)v5 + 1) = 20;
              memmove(v5 + 10, Pool + 1, v24);
              *((_DWORD *)v5 + 1) += *((_DWORD *)v5 + 4);
            }
            else
            {
              v11 = -1073741668;
              MFNDChildPFGlobalProperty = -1073741668;
            }
            *a3 = *((unsigned int *)v5 + 1);
          }
          ExFreePoolWithTag(Pool, 0x464D6152u);
        }
      }
    }
    else
    {
      v11 = -1073741811;
      MFNDChildPFGlobalProperty = -1073741811;
    }
    if ( v11 >= 0 )
      goto LABEL_49;
    goto LABEL_48;
  }
  MFNDChildPFGlobalProperty = -1073741637;
LABEL_48:
  StorMapMFNDErrorToNtStatus(0, &MFNDChildPFGlobalProperty);
  v11 = MFNDChildPFGlobalProperty;
LABEL_49:
  if ( v33 )
    StorMFNDAttemptSwitchToUserPrivilege((__int64)a1);
  if ( v11 >= 0 )
    v4 = (__int64)v5;
  StorLogMFNDQueryNSPageMap((__int64)a1, v4, 0, v11);
  return (unsigned int)v11;
}
