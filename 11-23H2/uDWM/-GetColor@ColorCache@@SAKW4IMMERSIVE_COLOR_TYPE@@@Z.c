/*
 * XREFs of ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18006BB14
 * Callers:
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18003B168 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800401B0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18002121C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall ColorCache::GetColor(unsigned int a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  unsigned int Buffer; // [rsp+20h] [rbp-18h] BYREF
  unsigned int Color; // [rsp+24h] [rbp-14h]
  char v8; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = &ColorCache::_lock;
  EnterCriticalSection(&ColorCache::_lock);
  Color = 0;
  v8 = 1;
  Buffer = a1;
  v2 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
  v3 = v2;
  if ( v2 )
  {
    if ( !*((_BYTE *)v2 + 8) )
    {
      v2[1] = CImmersiveColor::GetColor(a1);
      *((_BYTE *)v3 + 8) = 1;
    }
    v4 = v3[1];
  }
  else
  {
    v8 = 1;
    Buffer = a1;
    Color = CImmersiveColor::GetColor(a1);
    RtlInsertElementGenericTable(&ColorCache::_cachedColors, &Buffer, 0xCu, 0LL);
    v4 = Color;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v4;
}
