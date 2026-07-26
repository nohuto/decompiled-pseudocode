/*
 * XREFs of ndisSriovInterfaceReadVfConfigBlock @ 0x140156FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceReadVfConfigBlock(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int16 a2,
        int a3,
        void *a4,
        size_t Size)
{
  __int16 v6; // r13
  __int64 Pool2; // rax
  unsigned int *v10; // rbx
  unsigned int v11; // edi
  struct _NDIS_OID_REQUEST v13; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v13, 0, 248);
  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      102,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(Size + 20), 1869169742);
  v10 = (unsigned int *)Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 1) = 1;
    *(_BYTE *)Pool2 = 0x80;
    *(_WORD *)(Pool2 + 2) = 20;
    *(_DWORD *)(Pool2 + 16) = 20;
    *(_WORD *)(Pool2 + 4) = v6;
    *(_DWORD *)(Pool2 + 8) = a3;
    *(_DWORD *)(Pool2 + 12) = Size;
    memset(&v13, 0, 0xF8uLL);
    *(_DWORD *)&v13.NdisReserved[16] |= 8u;
    *(_QWORD *)&v13.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v13.NdisReserved[96]);
    v13.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v13.RequestType = 12LL;
    v13.DATA.QUERY_INFORMATION.Oid = 66131;
    v13.DATA.QUERY_INFORMATION.InformationBuffer = v10;
    v13.DATA.QUERY_INFORMATION.InformationBufferLength = Size + 20;
    *(_QWORD *)&v13.DATA.METHOD_INFORMATION.OutputBufferLength = (unsigned int)(Size + 20);
    v11 = ndisQuerySetMiniport(a1, 0LL, &v13, 0, 0LL);
    if ( !v11 )
      memmove(a4, (char *)v10 + v10[4], (unsigned int)Size);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v11 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x67u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      v11);
  return v11;
}
