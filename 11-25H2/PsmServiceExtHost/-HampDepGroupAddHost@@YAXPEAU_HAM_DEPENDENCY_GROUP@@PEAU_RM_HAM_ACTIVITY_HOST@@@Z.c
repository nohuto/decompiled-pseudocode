/*
 * XREFs of ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800352E0
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800348B8 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800351F0 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180082D80 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampUtilCompareHostIds@@YAJ_K0@Z @ 0x180035488 (-HampUtilCompareHostIds@@YAJ_K0@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800364AC (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180036BF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180054EB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

void __fastcall HampDepGroupAddHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  int v11; // r9d
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  char v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  volatile signed __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a2 + 88) = a1;
  v4 = 32LL;
  v5 = 32LL;
  if ( a2 )
    v5 = (__int64)a2 - 32;
  v6 = *(_QWORD *)v5;
  HampDepGroupAcquireLockExclusive(a1);
  v8 = (unsigned __int64)a1 + 56;
  v9 = *((_QWORD *)a1 + 7);
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 && v9 )
    v9 ^= v8;
  LOBYTE(v7) = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = 32LL;
      if ( v9 != 720 )
        v10 = v9 - 752;
      if ( (int)HampUtilCompareHostIds(v6, *(_QWORD *)v10) < 0 )
      {
        v12 = *(_QWORD *)v9;
        if ( v11 )
        {
          if ( !v12 )
            break;
          v12 ^= v9;
        }
        if ( !v12 )
          break;
      }
      else
      {
        v12 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_16;
          v12 ^= v9;
        }
        if ( !v12 )
        {
LABEL_16:
          LOBYTE(v7) = 1;
          break;
        }
      }
      v9 = v12;
    }
  }
  RtlRbInsertNodeEx(v8, v9, v7, (char *)a2 + 720);
  if ( (((unsigned __int64)*((unsigned int *)a2 + 166) >> 26) & 7) == 0 && (*((_DWORD *)a1 + 23))++ == -1 )
    NT_ASSERT("DependencyGroup->ResourceAcquireWaitCount > 0");
  if ( HampHostIsSuspendWaiter(a2, v13) )
  {
    v17 = *((_DWORD *)a1 + 22) + 1;
    *((_DWORD *)a1 + 22) = v17;
    if ( (unsigned int)dword_1800E72B0 > 5 )
    {
      v18 = 1;
      v19 = v17;
      if ( a2 )
        v4 = (__int64)a2 - 32;
      v20 = *(_QWORD *)v4;
      v21 = *(_QWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v17,
        (unsigned int)&unk_1800D28E4,
        v15,
        v16,
        (__int64)&v21,
        (__int64)&v19,
        (__int64)&v20,
        (__int64)&v18);
    }
  }
  HampDepGroupReleaseLockExclusive(a1);
}
