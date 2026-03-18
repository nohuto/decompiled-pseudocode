/*
 * XREFs of ?QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x1401AB390
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1403048A4 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     ?QueryNameString@FileQueryObj@Gre@@QEBA_NPEAU_OBJECT_NAME_INFORMATION@@K@Z @ 0x1401AB488 (-QueryNameString@FileQueryObj@Gre@@QEBA_NPEAU_OBJECT_NAME_INFORMATION@@K@Z.c)
 */

char __fastcall Gre::FileQueryObj::QueryInSystemFontsDir(Gre::FileQueryObj *this, bool *a2)
{
  char v2; // di
  int v5; // r14d
  __int64 v6; // rsi
  unsigned int v7; // r8d
  STRING *v8; // rbx
  const STRING *v9; // rcx
  bool v10; // al

  v2 = 0;
  v5 = 1;
  if ( !*(_QWORD *)this )
    return 0;
  v6 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  v8 = (STRING *)_InterlockedExchange64((volatile __int64 *)(v6 + 20128), 0LL);
  if ( v8 || (v5 = 0, (v8 = (STRING *)Win32AllocPoolZInit(400LL, 1986422343LL)) != 0LL) )
  {
    if ( Gre::FileQueryObj::QueryNameString(this, (struct _OBJECT_NAME_INFORMATION *)v8, v7) )
    {
      v9 = *(const STRING **)(v6 + 20120);
      v10 = v9 && RtlPrefixString(v9, v8, 1u);
      *a2 = v10;
      v2 = 1;
    }
    if ( v5 )
      _InterlockedExchange64((volatile __int64 *)(v6 + 20128), (__int64)v8);
    else
      Win32FreePool(v8);
  }
  return v2;
}
