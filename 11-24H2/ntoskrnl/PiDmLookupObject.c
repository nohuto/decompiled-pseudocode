/*
 * XREFs of PiDmLookupObject @ 0x1408B2D60
 * Callers:
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B1AD4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PiDmLookupObject(__int64 a1, _WORD *a2)
{
  int v3; // r8d
  _WORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 v7; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v9; // r9d
  unsigned __int16 *v10; // r10
  unsigned __int16 v11; // dx
  int v12; // r11d
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v14; // rax
  PVOID v15; // rax
  __int64 *Buffer; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+28h] [rbp-A0h]
  __int64 v19; // [rsp+40h] [rbp-88h] BYREF
  __int128 v20; // [rsp+48h] [rbp-80h]
  __int128 v21; // [rsp+58h] [rbp-70h]
  __int128 v22; // [rsp+68h] [rbp-60h]
  __int128 v23; // [rsp+78h] [rbp-50h]
  __int128 v24; // [rsp+88h] [rbp-40h]
  __int128 v25; // [rsp+98h] [rbp-30h]
  __int64 v26; // [rsp+A8h] [rbp-20h]

  v20 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  Buffer = &v19;
  v24 = 0LL;
  v25 = 0LL;
  if ( !a2 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 208);
  v4 = a2;
  *((_QWORD *)&v20 + 1) = a2;
  v5 = 0x7FFFLL;
  DWORD1(v21) = v3;
  v18 = 0LL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = -1073741811;
  if ( v5 )
  {
    v6 = 0;
    v7 = 2 * (0x7FFF - v5);
  }
  else
  {
    v7 = v18;
  }
  if ( v6 < 0 || v3 == 3 && v7 <= 8u )
    return 0LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v12 = v11 >> 1;
  Flink = CurrentServerSiloGlobals[75].Flink;
  for ( LODWORD(v21) = 0; v12; v9 = (unsigned __int16)v14 + 65599 * v9 )
  {
    v14 = *v10++;
    --v12;
    if ( (unsigned int)v14 >= 0x61 )
    {
      if ( (unsigned int)v14 > 0x7A )
      {
        if ( Flink )
        {
          if ( (unsigned __int16)v14 >= 0xC0u )
            LOWORD(v14) = *((_WORD *)&Flink->Flink
                          + (v14 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v14 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v14 >> 8))))
                        + v14;
        }
      }
      else
      {
        LOWORD(v14) = v14 - 32;
      }
    }
  }
  LODWORD(v21) = v9;
  v15 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer);
  if ( v15 )
    return *(_QWORD *)v15;
  else
    return 0LL;
}
