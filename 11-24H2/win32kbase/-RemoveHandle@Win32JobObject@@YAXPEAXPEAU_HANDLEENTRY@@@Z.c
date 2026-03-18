/*
 * XREFs of ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401AA150
 * Callers:
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall Win32JobObject::RemoveHandle(Win32JobObject *this, _BYTE *a2, struct _HANDLEENTRY *a3)
{
  __int64 *i; // rbx
  unsigned int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // r14
  Win32JobObject **v9; // rcx
  unsigned int v10; // eax

  if ( (a2[25] & 0x20) != 0 )
  {
    for ( i = *(__int64 **)(W32GetUserSessionState(this) + 69352); i; i = (__int64 *)*i )
    {
      v6 = *((_DWORD *)i + 14);
      v7 = 0LL;
      v8 = i[8];
      if ( v6 )
      {
        do
        {
          v9 = (Win32JobObject **)(v8 + 8 * v7);
          v10 = v6;
          if ( *v9 == this )
          {
            memmove(v9, v9 + 1, 8LL * (v6 - (unsigned int)v7 - 1));
            v10 = --*((_DWORD *)i + 14);
          }
          v7 = (unsigned int)(v7 + 1);
          v6 = v10;
        }
        while ( (unsigned int)v7 < v10 );
      }
    }
    a2[25] &= ~0x20u;
  }
}
