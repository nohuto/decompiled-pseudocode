/*
 * XREFs of ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1400878E0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

void __fastcall SURFACE::AddLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  char *v5; // r8
  char *v6; // rcx
  __int64 v7; // rax
  char **v8; // rax

  v2 = (SURFACE *)((char *)this + 624);
  if ( this != (SURFACE *)-624LL )
    GreEnterCriticalRegionAndAcquirePushLockExclusive((SURFACE *)((char *)this + 624));
  v5 = (char *)a2 + 48;
  v6 = (char *)this + 232;
  if ( (*((_DWORD *)a2 + 61) & 4) != 0 )
  {
    v7 = *(_QWORD *)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) == v6 )
    {
      *(_QWORD *)v5 = v7;
      *((_QWORD *)a2 + 7) = v6;
      *(_QWORD *)(v7 + 8) = v5;
      *(_QWORD *)v6 = v5;
      goto LABEL_6;
    }
LABEL_8:
    __fastfail(3u);
  }
  v8 = (char **)*((_QWORD *)this + 30);
  if ( *v8 != v6 )
    goto LABEL_8;
  *(_QWORD *)v5 = v6;
  *((_QWORD *)a2 + 7) = v8;
  *v8 = v5;
  *((_QWORD *)this + 30) = v5;
LABEL_6:
  if ( v2 )
    W32ReleasePushLockExclusive(v2);
}
