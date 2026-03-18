/*
 * XREFs of RIMGetButtonsSupported @ 0x1401DD200
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall RIMGetButtonsSupported(PHIDP_PREPARSED_DATA PreparsedData, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct _HIDP_BUTTON_CAPS *v8; // rax
  char *v9; // rbx
  char *v10; // rdx
  __int64 v11; // r8
  USHORT ButtonCapsLength[8]; // [rsp+20h] [rbp-98h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+30h] [rbp-88h] BYREF

  *a4 = 0;
  *a3 = 0;
  *a2 = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  if ( HidP_GetCaps(PreparsedData, &Capabilities) == 1114112 )
  {
    ButtonCapsLength[0] = Capabilities.NumberInputButtonCaps;
    if ( Capabilities.NumberInputButtonCaps )
    {
      v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(
                                         256LL,
                                         72LL * Capabilities.NumberInputButtonCaps,
                                         0x78707352u);
      v9 = (char *)v8;
      if ( v8 )
      {
        if ( HidP_GetButtonCaps(HidP_Input, v8, ButtonCapsLength, PreparsedData) == 1114112 && ButtonCapsLength[0] )
        {
          v10 = v9;
          v11 = ButtonCapsLength[0];
          do
          {
            if ( *(_WORD *)v10 == 9 )
            {
              switch ( *((_WORD *)v10 + 28) )
              {
                case 1:
                  *a2 = 1;
                  break;
                case 2:
                  *a3 = 1;
                  break;
                case 3:
                  *a4 = 1;
                  break;
              }
            }
            v10 += 72;
            --v11;
          }
          while ( v11 );
        }
        GreDeleteFastMutex(v9);
      }
    }
  }
}
