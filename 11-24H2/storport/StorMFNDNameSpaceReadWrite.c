/*
 * XREFs of StorMFNDNameSpaceReadWrite @ 0x14018E90C
 * Callers:
 *     RaidAdapterMFNDNameSpaceRead @ 0x14005B974 (RaidAdapterMFNDNameSpaceRead.c)
 *     RaidAdapterMFNDNameSpaceWrite @ 0x14005BE0C (RaidAdapterMFNDNameSpaceWrite.c)
 * Callees:
 *     StorIsMFNDSupported @ 0x140055FDC (StorIsMFNDSupported.c)
 *     StorMapMFNDErrorToNtStatus @ 0x140067C1C (StorMapMFNDErrorToNtStatus.c)
 *     StorMFNDAttemptSwitchToAdminPrivilege @ 0x1400C7110 (StorMFNDAttemptSwitchToAdminPrivilege.c)
 *     StorMFNDAttemptSwitchToUserPrivilege @ 0x1400C71BC (StorMFNDAttemptSwitchToUserPrivilege.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x140190DD8 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorMFNDNameSpaceReadWrite(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        PMDL SourceMdl,
        unsigned int a8,
        __int64 a9)
{
  unsigned int v10; // r14d
  PMDL Mdl; // rdi
  ULONG v12; // r15d
  char *v13; // r13
  int v14; // ebx
  __int64 v15; // rcx
  char v16; // cl
  char v17; // cl
  unsigned int v18; // r12d
  __int64 v19; // r9
  char v20; // r10
  unsigned int v21; // r9d
  int v22; // r8d
  char *v23; // rdx
  unsigned int v24; // ecx
  char v26; // [rsp+68h] [rbp-49h]
  int MFNDChildPFGlobalProperty; // [rsp+6Ch] [rbp-45h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-41h]
  int v29; // [rsp+74h] [rbp-3Dh]
  _DWORD v30[10]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-11h]
  unsigned int v32; // [rsp+A8h] [rbp-9h]
  char v33; // [rsp+B4h] [rbp+3h]

  memset_0(v30, 0, 0x40uLL);
  v10 = a5;
  Mdl = 0LL;
  v28 = 0;
  v26 = 0;
  v12 = 0;
  LOBYTE(v29) = 0;
  v13 = 0LL;
  if ( StorIsMFNDSupported(a1) )
  {
    MFNDChildPFGlobalProperty = StorRetrieveMFNDChildPFGlobalProperty();
    v14 = MFNDChildPFGlobalProperty;
    if ( MFNDChildPFGlobalProperty >= 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 6160) + 40LL);
      if ( v15 && (v16 = *(_BYTE *)(v15 + 2)) != 0 )
      {
        if ( a8 < (unsigned __int64)a5 << v16 )
        {
          MFNDChildPFGlobalProperty = -1073741585;
          goto LABEL_39;
        }
        v29 = 1;
        MFNDChildPFGlobalProperty = StorMFNDAttemptSwitchToAdminPrivilege(a1);
        v14 = MFNDChildPFGlobalProperty;
        if ( MFNDChildPFGlobalProperty >= 0 )
        {
          v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 6160) + 40LL) + 2LL);
          v18 = *(_DWORD *)(a1 + 408) >> v17;
          if ( !v18 )
            v18 = v29;
          if ( a5 > v18 )
          {
            v12 = v18 << v17;
            v26 = v29;
            v10 = v18;
            Mdl = IoAllocateMdl(0LL, (v18 << v17) + 4096, 0, 0, 0LL);
            if ( !Mdl )
            {
              MFNDChildPFGlobalProperty = -1073741670;
              goto LABEL_39;
            }
            v13 = (char *)SourceMdl->StartVa + SourceMdl->ByteOffset;
          }
          v19 = a4;
          while ( a5 > v28 )
          {
            v20 = v26;
            if ( v26 && Mdl )
            {
              IoBuildPartialMdl(SourceMdl, Mdl, v13, v12);
              v19 = a4;
              v20 = v26;
            }
            v30[1] = a3;
            v31 = v19;
            LOWORD(v32) = v10 - v29;
            if ( a2 )
            {
              v33 = 10;
              v30[0] = v30[0] & 0xFFFFFF00 | 0xD2;
            }
            else
            {
              v33 = 11;
              v30[0] = v30[0] & 0xFFFFFF00 | 0xD1;
            }
            v32 = v32 & 0x7FFFFFFF | (a6 != 0 ? 0x80000000 : 0);
            if ( v20 )
            {
              v21 = v12;
              v22 = (int)Mdl;
              LODWORD(v23) = (_DWORD)v13;
            }
            else
            {
              v22 = (int)SourceMdl;
              v23 = (char *)SourceMdl->StartVa + SourceMdl->ByteOffset;
              v21 = a8;
            }
            v14 = StorSendMFNDCommand(a1, (_DWORD)v23, v22, v21, (__int64)v30);
            if ( v14 < 0 )
              break;
            v24 = v10 + v28;
            v19 = v10 + a4;
            v28 = v24;
            a4 = v19;
            if ( a5 <= v24 )
              break;
            if ( Mdl )
            {
              if ( (Mdl->MdlFlags & 0x20) != 0 )
              {
                MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
                v24 = v28;
                v19 = a4;
              }
              v13 += v12;
            }
            v10 = a5 - v24;
            if ( a5 - v24 > v18 )
              v10 = v18;
            v12 = v10 << *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 6160) + 40LL) + 2LL);
          }
          MFNDChildPFGlobalProperty = v14;
          if ( Mdl )
            IoFreeMdl(Mdl);
        }
      }
      else
      {
        v14 = -1073741668;
        MFNDChildPFGlobalProperty = -1073741668;
      }
    }
    if ( v14 >= 0 )
      goto LABEL_40;
    goto LABEL_39;
  }
  MFNDChildPFGlobalProperty = -1073741637;
LABEL_39:
  StorMapMFNDErrorToNtStatus(a9, &MFNDChildPFGlobalProperty);
  v14 = MFNDChildPFGlobalProperty;
LABEL_40:
  if ( (_BYTE)v29 )
    StorMFNDAttemptSwitchToUserPrivilege(a1);
  return (unsigned int)v14;
}
