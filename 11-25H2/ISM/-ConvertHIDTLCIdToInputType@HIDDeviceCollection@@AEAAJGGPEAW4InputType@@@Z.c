/*
 * XREFs of ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x18005F5D4
 * Callers:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F2B0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HIDDeviceCollection::ConvertHIDTLCIdToInputType(
        HIDDeviceCollection *this,
        __int16 a2,
        __int16 a3,
        enum InputType *a4)
{
  int v4; // eax

  switch ( a2 )
  {
    case 4:
      if ( a3 == 13 )
      {
        v4 = 8;
        goto LABEL_7;
      }
      goto LABEL_12;
    case 5:
      if ( a3 == 13 )
      {
        v4 = 32;
        goto LABEL_7;
      }
      if ( a3 == 1 )
      {
        v4 = 64;
        goto LABEL_7;
      }
      goto LABEL_12;
    case 238:
      if ( a3 == 1 )
        goto LABEL_6;
      goto LABEL_12;
  }
  if ( a2 != 1 )
  {
    v4 = 128;
    if ( a2 == 128 || a2 == 19 )
      goto LABEL_11;
    if ( a2 != 2 )
    {
LABEL_23:
      if ( a2 == -86 )
      {
        if ( a3 == 1 )
        {
          v4 = 1024;
          goto LABEL_7;
        }
        goto LABEL_12;
      }
      if ( a2 != 15 || a3 != 1 )
      {
        if ( a2 != 1 )
        {
          if ( a2 == 15 )
          {
            if ( a3 == 13 )
            {
              v4 = 2048;
              goto LABEL_7;
            }
            goto LABEL_12;
          }
          goto LABEL_31;
        }
        if ( a3 != -246 )
        {
          if ( a3 == 18 )
          {
LABEL_33:
            v4 = 0x4000;
            goto LABEL_7;
          }
LABEL_31:
          if ( a2 == 2 )
          {
            if ( a3 == 18 )
              goto LABEL_33;
LABEL_12:
            v4 = 256;
            goto LABEL_7;
          }
          if ( a2 != 17 )
            goto LABEL_12;
          v4 = 0x100000;
LABEL_11:
          if ( a3 == 1 )
            goto LABEL_7;
          goto LABEL_12;
        }
      }
      v4 = 0x2000;
      goto LABEL_7;
    }
LABEL_21:
    if ( a3 == 13 )
    {
      v4 = 16;
      goto LABEL_7;
    }
    goto LABEL_23;
  }
  if ( a3 != 12 )
    goto LABEL_21;
LABEL_6:
  v4 = 128;
LABEL_7:
  *(_DWORD *)a4 = v4;
  return 0LL;
}
