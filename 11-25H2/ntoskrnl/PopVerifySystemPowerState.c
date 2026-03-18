/*
 * XREFs of PopVerifySystemPowerState @ 0x140A7A98C
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1404AD894 (PopActionRetrieveInitialState.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PdcPoVerifyPowerState @ 0x140750A30 (PdcPoVerifyPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x140A102AC (PopVerifySystemPowerPolicy.c)
 *     PopAdvanceSystemPowerState @ 0x140AB570C (PopAdvanceSystemPowerState.c)
 * Callees:
 *     PopIsHiberbootSupported @ 0x1406EDC14 (PopIsHiberbootSupported.c)
 *     PopIsHibernateSupported @ 0x140A870FC (PopIsHibernateSupported.c)
 */

void __fastcall PopVerifySystemPowerState(int *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  char v6; // al

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    v4 = *a1;
    v5 = *a1;
    if ( *a1 <= -1 || (unsigned int)(v4 - 2) <= 3 )
    {
      if ( a2 > 1 )
      {
        if ( a2 != 2 )
          goto LABEL_7;
        v6 = 1;
        if ( v5 != 2 )
        {
          if ( v5 != 3 )
          {
            if ( v5 != 4 )
            {
              if ( v5 != 5 )
                goto LABEL_7;
LABEL_34:
              if ( !v6
                || !PopIsHiberbootSupported((__int64)&PopCapabilities)
                && !(unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
              {
                v4 = 1;
              }
              goto LABEL_7;
            }
LABEL_33:
            if ( HIBYTE(word_140F0B8C4) )
              goto LABEL_7;
            goto LABEL_34;
          }
LABEL_31:
          if ( (_BYTE)word_140F0B8C4 )
            goto LABEL_7;
          v4 = 4;
          goto LABEL_33;
        }
LABEL_29:
        if ( byte_140F0B8C3 )
          goto LABEL_7;
        v4 = 3;
        goto LABEL_31;
      }
      if ( v4 == 5 )
      {
        if ( PopIsHiberbootSupported((__int64)&PopCapabilities)
          || (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
        {
          goto LABEL_7;
        }
        v4 = 4;
      }
      else if ( v5 != 4 )
      {
        if ( v5 != 3 )
        {
          if ( v5 != 2 )
            goto LABEL_7;
          goto LABEL_26;
        }
LABEL_24:
        if ( (_BYTE)word_140F0B8C4 )
          goto LABEL_7;
        v4 = 2;
LABEL_26:
        if ( byte_140F0B8C3 )
          goto LABEL_7;
        v4 = 1;
        if ( v2 != 1 )
          goto LABEL_7;
        v6 = 0;
        v4 = 2;
        goto LABEL_29;
      }
      if ( HIBYTE(word_140F0B8C4) )
      {
LABEL_7:
        *v3 = v4;
        return;
      }
      v4 = 3;
      goto LABEL_24;
    }
  }
}
