/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18002252C
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021B40 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180003220 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800384E0 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053260 (-RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800532D0 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060D18 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180063450 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180070B04 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // r13
  char *v11; // rsi
  __int64 v12; // rbx
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v13; // rax
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **v14; // rcx
  char *v15; // rdi
  unsigned __int64 v16; // r9
  int v17; // r9d
  char v18; // r11
  int v19; // eax
  int v20; // r8d
  int v21; // edx
  int v22; // r11d
  __int64 v23; // rcx
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v24; // rax
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **v25; // rcx
  int v26; // eax
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  bool v31[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+58h] [rbp-18h] BYREF
  __int64 v35; // [rsp+60h] [rbp-10h] BYREF
  __int64 v36; // [rsp+68h] [rbp-8h] BYREF
  struct _RM_ACTIVITY_HOST_METRICS *v37; // [rsp+B8h] [rbp+48h]
  unsigned int v38; // [rsp+C0h] [rbp+50h]

  v38 = a3;
  v37 = a2;
  v8 = a8;
  v9 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  *a8 = 0;
  *a7 = 0;
  while ( v9 < a3 )
  {
    v11 = (char *)a2 + 64 * (unsigned __int64)v9;
    v12 = *((_QWORD *)v11 + 6);
    if ( *((__int16 *)v11 + 30) >= 0 )
    {
      if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)v11 + 6)) )
        return;
      if ( (a5 & 8) != 0 )
      {
        RmpPolicyComputeDesiredEmptyState(v10 + 400, v12, 2LL);
        if ( (a5 & 4) == 0 )
          *v8 = 1;
        v23 = RmpActivityHostHasEmptiedWorkingSet((struct _RM_ACTIVITY_HOST *)v12) != 0 ? 32LL : 24LL;
      }
      else if ( RmpActivityHostHasEmptiedWorkingSet((struct _RM_ACTIVITY_HOST *)v12) )
      {
        if ( v18 )
          return;
        v26 = 0;
        v20 = *(_DWORD *)(v12 + 1456);
        if ( (*(_DWORD *)(v12 + 1268) & 0x10) == 0 && (v20 & 0x200) == 0 )
        {
          v27 = 2 * (*(_DWORD *)(v10 + 504) & 1);
          if ( (v20 & 0x100) == 0 )
            v27 |= 2 * (*(_DWORD *)(v10 + 504) & 2);
          if ( (*(_DWORD *)(v10 + 504) & 4) != 0 )
            v26 = v27;
          else
            v26 = v27 | 0x22;
        }
        v22 = v26 | *(_DWORD *)(v12 + 1268) & 0x27;
        if ( (a5 & 4) == 0 )
          *v8 = 1;
        v23 = 32LL;
      }
      else
      {
        v19 = 0;
        v20 = *(_DWORD *)(v12 + 1456);
        if ( (*(_DWORD *)(v12 + 1268) & 0x10) == 0 && (v20 & 0x200) == 0 )
        {
          v21 = 2 * (*(_DWORD *)(v10 + 504) & 1);
          if ( (v20 & 0x100) == 0 )
            v21 |= 2 * (*(_DWORD *)(v10 + 504) & 2);
          v19 = v21 | 2;
          if ( (*(_BYTE *)(v10 + 504) & 4) != 0 )
            v19 = v21;
        }
        v22 = v19 | *(_DWORD *)(v12 + 1268) & 0x27;
        v23 = 24LL;
      }
      *(_DWORD *)(v12 + 1460) |= v22;
      v15 = &v11[v23];
      if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
      {
        v35 = *(_QWORD *)v15;
        v36 = *(_QWORD *)(v12 + 32);
        v31[0] = (v22 & 0x20) != 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          (unsigned int)&dword_1800E8278,
          (unsigned int)&unk_1800D9F27,
          v20,
          v17,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)v31);
      }
      *(_QWORD *)(v12 + 1424) = a6;
      v24 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)(v12 + 1432);
      v25 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)*((_QWORD *)a6 + 1);
      if ( *v25 != a6 )
LABEL_29:
        __fastfail(3u);
      *(_QWORD *)v24 = a6;
      *(_QWORD *)(v12 + 1440) = v25;
      *v25 = v24;
      *((_QWORD *)a6 + 1) = v24;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
        __fastfail(0xEu);
      RmpActivityHostCheckQueueWork(*((struct _RM_ACTIVITY_HOST **)v11 + 6));
    }
    else
    {
      if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 1LL) )
      {
        v32 = *(_QWORD *)v11;
        v33 = *((_QWORD *)v11 + 3);
        v34 = *(_QWORD *)(v12 + 32);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v28,
          (__int64)&unk_1800DA026,
          v29,
          v30,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32);
      }
      *(_QWORD *)(v12 + 1424) = a6;
      v13 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)(v12 + 1432);
      v14 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)*((_QWORD *)a6 + 1);
      if ( *v14 != a6 )
        goto LABEL_29;
      *(_QWORD *)v13 = a6;
      *(_QWORD *)(v12 + 1440) = v14;
      *v14 = v13;
      *((_QWORD *)a6 + 1) = v13;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
        __fastfail(0xEu);
      RmpActivityHostRevokeResourceSets(v12, 3LL, 4LL);
      v15 = v11 + 24;
    }
    *a7 = 1;
    if ( (a5 & 2) != 0 || *(_QWORD *)v15 > a4 )
      return;
    v16 = a4 - *(_QWORD *)v15;
    ++v9;
    v8 = a8;
    a3 = v38;
    a2 = v37;
    a4 = v16;
  }
}
