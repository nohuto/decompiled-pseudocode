/*
 * XREFs of ?GetEntrySkipInUseValidation@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x1400B68C4
 * Callers:
 *     ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C1F94 (-hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntrySkipInUseValidation(GdiHandleManager *this, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rdi
  unsigned int v5; // r11d
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r11
  unsigned int v11; // r10d
  unsigned int v12; // ecx
  __int64 v13; // r11

  v2 = 0LL;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)this <= 0x10000u )
    {
      a2 = (unsigned __int16)a2;
    }
    else
    {
      v4 = *((_QWORD *)this + 2);
      v5 = *(_DWORD *)(v4 + 2056);
      if ( (unsigned __int16)a2 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
      {
        v9 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)a2 >= v5 )
          v6 = (((unsigned __int16)a2 - v5) >> 16) + 1;
        else
          v6 = 0;
        v7 = *(_QWORD *)(v4 + 8LL * v6 + 8);
        if ( v6 )
          v8 = (unsigned __int16)a2 + ((1 - v6) << 16) - v5;
        else
          v8 = (unsigned __int16)a2;
        v9 = 0LL;
        if ( (unsigned int)v8 < *(_DWORD *)(v7 + 20) )
          v9 = *(_QWORD *)v7 + 24 * v8;
      }
      if ( *(unsigned __int8 *)(v9 + 13) == HIWORD(a2) )
        a2 = (unsigned __int16)a2;
    }
  }
  v10 = *((_QWORD *)this + 2);
  v11 = *(_DWORD *)(v10 + 2056);
  if ( a2 < v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
  {
    if ( a2 >= v11 )
      v12 = ((a2 - v11) >> 16) + 1;
    else
      v12 = 0;
    v13 = *(_QWORD *)(v10 + 8LL * v12 + 8);
    if ( v12 )
      a2 += ((1 - v12) << 16) - v11;
    if ( a2 < *(_DWORD *)(v13 + 20) )
      return (struct _ENTRY *)(*(_QWORD *)v13 + 24LL * a2);
  }
  return (struct _ENTRY *)v2;
}
