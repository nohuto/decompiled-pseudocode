/*
 * XREFs of GreMakeBitmapStock @ 0x1401D6B00
 * Callers:
 *     NtGdiSetBitmapAttributes @ 0x1401D6AE0 (NtGdiSetBitmapAttributes.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1401748D8 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1SURFREFAPI@@QEAA@XZ @ 0x1401D8C90 (--1SURFREFAPI@@QEAA@XZ.c)
 *     Feature_3983481146__private_IsEnabledDeviceUsageNoInline @ 0x14030FEC4 (Feature_3983481146__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GreMakeBitmapStock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rbx
  SURFACE *v6; // rcx
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // eax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  LOBYTE(a2) = 5;
  v3 = 0LL;
  v13 = HmgLock(a1, a2);
  v5 = v13;
  if ( !v13 )
  {
LABEL_21:
    v2 = v3;
    goto LABEL_22;
  }
  if ( !(unsigned int)Feature_3983481146__private_IsEnabledDeviceUsageNoInline() || !*(_DWORD *)(v5 + 8) )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection((SURFACE *)v5) || !*(_WORD *)(v5 + 100) && *(_DWORD *)(v5 + 216))
      && (a1 & 0x800000) == 0
      && !*(_DWORD *)(v5 + 168) )
    {
      if ( (*(_DWORD *)(v5 + 112) & 0x80000800) != 0 || SURFACE::GetFirstLSurf(v6) )
      {
        if ( !*(_DWORD *)(v5 + 168) )
        {
          v11 = *(_DWORD *)(v5 + 112);
          if ( (v11 & 0x800) == 0 && v11 >= 0 )
            SURFACE::GetFirstLSurf((SURFACE *)v5);
        }
      }
      else
      {
        v3 = a1 | 0x800000;
        v8 = Gre::Base::Globals(v7);
        if ( _InterlockedDecrement((volatile signed __int32 *)v8 + 1061) >= 0
          && (v9 = v13, (unsigned int)HmgLockAndModifyHandleType(v13, v3)) )
        {
          if ( (*(_DWORD *)v9 & 0x800000) != 0 )
            *(_WORD *)(v9 + 102) |= 0x200u;
          LOBYTE(v10) = 5;
          *(_QWORD *)(v9 + 32) = v3;
          HmgSetOwner(v3, 0LL, v10);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)v8 + 1061);
          v3 = 0LL;
        }
      }
    }
    goto LABEL_21;
  }
LABEL_22:
  SURFREFAPI::~SURFREFAPI((SURFREFAPI *)&v13);
  return v2;
}
