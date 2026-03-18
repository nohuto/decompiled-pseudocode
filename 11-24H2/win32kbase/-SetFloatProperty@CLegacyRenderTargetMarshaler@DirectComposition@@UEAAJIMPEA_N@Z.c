/*
 * XREFs of ?SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140196840
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x1401CD2A4 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetFloatProperty(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // ebx
  int v7; // edx
  int v8; // edx

  v4 = 0;
  v7 = a2 - 7;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 4 )
        return (unsigned int)-1073741811;
      if ( a3 != *((float *)this + 33) )
      {
        if ( a3 >= 1.0 )
        {
          *((_DWORD *)this + 4) |= 0x100u;
          *((float *)this + 33) = a3;
LABEL_14:
          *a4 = 1;
          return v4;
        }
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      if ( !(unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
        return (unsigned int)-1073741811;
      if ( a3 != *((float *)this + 27) )
      {
        if ( a3 <= 0.0 )
          return (unsigned int)-1073741811;
        *((_DWORD *)this + 4) |= 0x80u;
        *((float *)this + 27) = a3;
        *a4 = 1;
      }
    }
  }
  else if ( a3 != *((float *)this + 26) )
  {
    if ( a3 > 0.0 )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((float *)this + 26) = a3;
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  return v4;
}
