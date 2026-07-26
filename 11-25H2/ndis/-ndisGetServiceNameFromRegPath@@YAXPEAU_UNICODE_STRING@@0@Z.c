/*
 * XREFs of ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x140088ED0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140087B70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x14017B298 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetServiceNameFromRegPath(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  char v3; // r8
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // ax
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // r9
  unsigned __int16 v8; // dx

  if ( a2 && a1 && a1->Buffer )
  {
    v3 = 1;
    v4 = 0;
    a2->Buffer = 0LL;
    *(_DWORD *)&a2->Length = 0;
    v5 = 0;
    Length = a1->Length;
    Buffer = a1->Buffer;
    if ( (a1->Length & 0xFFFE) != 0 )
    {
      do
      {
        if ( Buffer[v5] == 92 )
        {
          v3 = 1;
        }
        else if ( v3 )
        {
          a2->Buffer = &Buffer[v5];
          v4 = v5;
          v3 = 0;
        }
        Length = a1->Length;
        ++v5;
      }
      while ( v5 < (unsigned __int16)(a1->Length >> 1) );
    }
    if ( a2->Buffer )
    {
      v8 = Length - 2 * v4;
      a2->MaximumLength = v8;
      a2->Length = v8;
    }
  }
}
