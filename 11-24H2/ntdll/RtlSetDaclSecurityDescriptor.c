/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x1800E0060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN DaclPresent,
        PACL Dacl,
        BOOLEAN DaclDefaulted)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 >= 0 )
  {
    if ( DaclPresent )
    {
      v5 = v4 | 4;
      *((_QWORD *)SecurityDescriptor + 4) = 0LL;
      if ( Dacl )
        *((_QWORD *)SecurityDescriptor + 4) = Dacl;
      v6 = v5 & 0xFFF7;
      *((_WORD *)SecurityDescriptor + 1) = v6;
      if ( !DaclDefaulted )
        return 0;
      v7 = v6 | 8;
    }
    else
    {
      v7 = v4 & 0xFFFB;
    }
    *((_WORD *)SecurityDescriptor + 1) = v7;
    return 0;
  }
  return -1073741703;
}
