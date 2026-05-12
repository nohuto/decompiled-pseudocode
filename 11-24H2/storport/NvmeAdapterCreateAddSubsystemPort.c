/*
 * XREFs of NvmeAdapterCreateAddSubsystemPort @ 0x1400CDE2C
 * Callers:
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400E66F0 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterAddSubsystemPort @ 0x14019363C (NvmeAdapterAddSubsystemPort.c)
 * Callees:
 *     McTemplateK0qjzshsssst_EtwWriteTransfer @ 0x1400CC0F4 (McTemplateK0qjzshsssst_EtwWriteTransfer.c)
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterCreateSubsystemPort @ 0x1400CE150 (NvmeAdapterCreateSubsystemPort.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D3748 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterIsSubsystemPortPresent @ 0x1400D3C4C (NvmeAdapterIsSubsystemPortPresent.c)
 *     NvmeAdapterSendControlAddSubsystemPort @ 0x1400D6D98 (NvmeAdapterSendControlAddSubsystemPort.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterCreateAddSubsystemPort(
        __int64 a1,
        char a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5,
        unsigned __int16 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        _QWORD *a11)
{
  __int64 v12; // r14
  __int64 v15; // rcx
  char *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int SubsystemPort; // ebx
  char *v25; // rdi
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  const char *v28; // r8
  __int64 IsSubsystemPortPresent; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  _QWORD *v32; // [rsp+88h] [rbp-78h]
  char v33[256]; // [rsp+90h] [rbp-70h] BYREF

  v12 = *(_QWORD *)(a1 + 40);
  v32 = a11;
  v31 = a4;
  memset_0(v33, 0, sizeof(v33));
  if ( *(_BYTE *)a3 )
  {
    v15 = 2LL;
    v16 = v33;
    do
    {
      v17 = a3[1];
      *(_OWORD *)v16 = *a3;
      v18 = a3[2];
      *((_OWORD *)v16 + 1) = v17;
      v19 = a3[3];
      *((_OWORD *)v16 + 2) = v18;
      v20 = a3[4];
      *((_OWORD *)v16 + 3) = v19;
      v21 = a3[5];
      *((_OWORD *)v16 + 4) = v20;
      v22 = a3[6];
      *((_OWORD *)v16 + 5) = v21;
      v23 = a3[7];
      a3 += 8;
      *((_OWORD *)v16 + 6) = v22;
      v16 += 128;
      *((_OWORD *)v16 - 1) = v23;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741811;
    strcpy(v33, "nqn.2014-08.org.nvmexpress.discovery");
  }
  SubsystemPort = NvmeAdapterHostGatewayAcquireRundown(a1);
  if ( SubsystemPort >= 0 )
  {
    IsSubsystemPortPresent = NvmeAdapterIsSubsystemPortPresent(a1, v33, a6);
    v25 = (char *)IsSubsystemPortPresent;
    if ( IsSubsystemPortPresent )
    {
      if ( !a2 )
      {
        SubsystemPort = -1073741771;
LABEL_23:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 56));
        return (unsigned int)SubsystemPort;
      }
    }
    else
    {
      if ( !*(_BYTE *)a5 )
      {
        *a5 = *(_OWORD *)(a1 + 328);
        a5[1] = *(_OWORD *)(a1 + 344);
      }
      SubsystemPort = NvmeAdapterCreateSubsystemPort(
                        a1,
                        (unsigned int)v33,
                        v31,
                        (_DWORD)a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        (__int64)&IsSubsystemPortPresent);
      if ( SubsystemPort < 0 )
        goto LABEL_23;
      v25 = (char *)IsSubsystemPortPresent;
      SubsystemPort = NvmeAdapterSendControlAddSubsystemPort(v12, IsSubsystemPortPresent);
      if ( SubsystemPort < 0 )
      {
        NvmeAdapterCleanupSubsystemPort(v12, 0, (PVOID *)&IsSubsystemPortPresent);
        goto LABEL_23;
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 384), 1u);
      v26 = *(_QWORD **)(a1 + 368);
      v27 = v25 + 8;
      if ( *v26 != a1 + 360 )
        __fastfail(3u);
      *v27 = a1 + 360;
      *((_QWORD *)v25 + 2) = v26;
      *v26 = v27;
      *(_QWORD *)(a1 + 368) = v27;
      ++*(_DWORD *)(a1 + 376);
      ExReleaseResourceLite((PERESOURCE)(a1 + 384));
      KeLeaveCriticalRegion();
      if ( (byte_14017146A & 2) != 0 )
      {
        v28 = "IO";
        if ( (v25[32] & 2) == 0 )
          v28 = "Discovery";
        McTemplateK0qjzshsssst_EtwWriteTransfer(
          (__int64)(v25 + 316),
          (__int64)(v25 + 60),
          (__int64)v28,
          *(_DWORD *)(v12 + 56),
          v12 + 1032,
          *(const wchar_t **)(v12 + 1016),
          (const char *)(a1 + 72),
          *((_WORD *)v25 + 2),
          v25 + 60,
          v25 + 316,
          v25 + 572,
          v28,
          1);
      }
    }
    *v32 = v25;
    goto LABEL_23;
  }
  return (unsigned int)SubsystemPort;
}
