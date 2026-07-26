/*
 * XREFs of ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1400A6EF8
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140057C10 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x14006EED0 (Duplicate802_11AttachAttributesCommon.c)
 */

__int64 __fastcall ndisMSetNative802_11Attributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES *a2)
{
  __int128 *v2; // rdi
  unsigned int v4; // edi
  int v5; // edx
  unsigned int v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (__int128 *)a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      127,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
  if ( a1->MediaSpecificAttributes )
  {
    return (unsigned int)-1073676267;
  }
  else
  {
    LOBYTE(v8) = 0;
    LOBYTE(v7) = 0;
    v4 = Duplicate802_11AttachAttributesCommon(
           _byteswap_ushort(*(_WORD *)&a1->DriverHandle->MajorNdisVersion),
           v2,
           (__int64)NdisAllocateMemoryWithTag,
           1835091022LL,
           v7,
           0LL,
           v8,
           0LL,
           &v9);
    if ( v4 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v5,
          1,
          128,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1);
      }
    }
    else
    {
      a1->MediaSpecificAttributes = (_NDIS_OBJECT_HEADER *)v9;
    }
  }
  return v4;
}
