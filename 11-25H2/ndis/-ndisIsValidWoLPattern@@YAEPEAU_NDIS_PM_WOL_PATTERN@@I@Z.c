/*
 * XREFs of ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x14005CE00
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CBB0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x14005CEE0 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 */

unsigned __int8 __fastcall ndisIsValidWoLPattern(struct _NDIS_PM_WOL_PATTERN *a1)
{
  UCHAR Revision; // al
  _DWORD *v2; // r8
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v11; // ecx
  int v12; // ecx

  if ( a1->Header.Type == 0x80 )
  {
    Revision = a1->Header.Revision;
    if ( (Revision == 2 || Revision == 1)
      && a1->Header.Size >= 0xC4u
      && ndisIsValidPmCountedString(&a1->FriendlyName)
      && !v2[38] )
    {
      v5 = v2[3];
      if ( v5 == 1 )
      {
        v6 = v2[41];
        if ( v6 )
        {
          v7 = v2[43];
          if ( v7 )
          {
            if ( v6 >= v7 >> 3 )
            {
              v8 = v2[40];
              if ( v8 >= v4 && v8 + v6 >= v8 && v8 + v6 <= v3 )
              {
                v9 = v2[42];
                if ( v9 >= v4 && v9 + v7 >= v9 && v9 + v7 <= v3 )
                  return 1;
              }
            }
          }
        }
      }
      else
      {
        v11 = v5 - 2;
        if ( !v11 )
          return 1;
        v12 = v11 - 1;
        if ( !v12 || (unsigned int)(v12 - 1) < 2 )
          return 1;
      }
    }
  }
  return 0;
}
