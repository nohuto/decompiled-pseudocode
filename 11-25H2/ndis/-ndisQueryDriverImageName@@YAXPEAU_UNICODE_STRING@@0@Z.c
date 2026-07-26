/*
 * XREFs of ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x140068600
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140068470 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140087B70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x14017B298 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueryDriverImageName(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  bool v2; // zf
  wchar_t *Buffer; // rdx
  unsigned __int16 v5; // si
  PVOID v6; // r8
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // bx
  wchar_t *Pool2; // rax
  const WCHAR *v11; // rax
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // cx
  PVOID P[2]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE QueryTable[64]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v16; // [rsp+80h] [rbp-38h]
  __int128 v17; // [rsp+90h] [rbp-28h]
  __int128 v18; // [rsp+A0h] [rbp-18h]

  v2 = a1->Length == 0;
  *(_OWORD *)P = 0LL;
  if ( v2 )
    goto LABEL_8;
  Buffer = a1->Buffer;
  if ( !Buffer )
    goto LABEL_8;
  *(_OWORD *)QueryTable = 0LL;
  *(_DWORD *)&QueryTable[8] = 304;
  memset(&QueryTable[32], 0, 32);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_DWORD *)&QueryTable[32] = 0x2000000;
  *(_QWORD *)&QueryTable[16] = L"ImagePath";
  *(_QWORD *)&QueryTable[24] = P;
  if ( RtlQueryRegistryValuesEx(1u, (PCWSTR)Buffer, (PRTL_QUERY_REGISTRY_TABLE)QueryTable, 0LL, 0LL) )
  {
LABEL_8:
    v6 = P[1];
    goto LABEL_9;
  }
  v5 = 0;
  v6 = P[1];
  v7 = LOWORD(P[0]) >> 1;
  v8 = 0;
  if ( LOWORD(P[0]) >> 1 )
  {
    do
    {
      v12 = v8 + 1;
      v13 = v8 + 1;
      v2 = *((_WORD *)P[1] + v8++) == 92;
      if ( !v2 )
        v13 = v5;
      v5 = v13;
    }
    while ( v12 < v7 );
  }
  if ( v5 < v7 )
  {
    v9 = LOWORD(P[0]) + 2 * (1 - v5);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, v9, 1851868238);
    a2->Buffer = Pool2;
    if ( Pool2 )
    {
      v11 = (const WCHAR *)P[1];
      a2->Length = 0;
      a2->MaximumLength = v9;
      RtlAppendUnicodeToString(a2, &v11[v5]);
    }
    goto LABEL_8;
  }
LABEL_9:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
