/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401F8694
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1401F8270 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x140114714 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 *     ?Detach@AttachProcessObj@Gre@@QEAAXXZ @ 0x140114730 (-Detach@AttachProcessObj@Gre@@QEAAXXZ.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x140114858 (-Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1401A8908 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        PRKPROCESS PROCESS,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  unsigned int v7; // r15d
  void **v8; // rsi
  int v13; // ebx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // r8d
  struct PFF *v19; // rdi
  int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int i; // edi
  int v26; // [rsp+20h] [rbp-A8h]
  HSEMAPHORE v28; // [rsp+28h] [rbp-A0h] BYREF
  struct _EPROCESS *v29; // [rsp+30h] [rbp-98h]
  struct _EPROCESS *CurrentProcess; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-80h] BYREF
  char v33; // [rsp+78h] [rbp-50h]

  v7 = 0;
  v8 = a6;
  *a4 = 0;
  *a5 = 0;
  v13 = 0;
  v29 = PROCESS;
  v33 = 0;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(PROCESS);
  memset(&ApcState, 0, sizeof(ApcState));
  Gre::AttachProcessObj::Attach(&ApcState, PROCESS);
  v31 = *(_QWORD *)(W32GetSessionState(v15, v14) + 96) + 4872LL;
  v16 = v31;
  SEMOBJ<17>::SEMOBJ<17>(&v28, v31);
  v17 = *(_QWORD *)(v16 + 15544);
  v26 = 0;
  if ( *(_DWORD *)(v17 + 24) )
  {
    v18 = 0x80000000;
    do
    {
      if ( ((v13 + v18) & v18) == 0 && v13 != -1073741789 )
        break;
      v19 = SkipInvalidPff(*(struct PFF **)(v17 + 8LL * v7 + 40));
      if ( v19 )
      {
        do
        {
          if ( ((v13 + v18) & v18) == 0 && v13 != -1073741789 )
            break;
          if ( *((_QWORD *)v19 + 11) )
          {
            v20 = *((_DWORD *)v19 + 13);
            if ( (v20 & 8) == 0 && (v20 & 0x200) == 0 )
            {
              if ( ++*a4 == -1 )
                goto LABEL_15;
              v21 = *((_DWORD *)v19 + 8);
              v22 = -1;
              v23 = v21 + *a5;
              if ( v23 >= v21 )
                v22 = v21 + *a5;
              *a5 = v22;
              if ( v23 < v21 )
LABEL_15:
                v13 = -1073741675;
              if ( a2 && v13 >= 0 )
              {
                if ( *a4 > a2 || *a5 > a3 )
                {
                  v13 = -1073741789;
                }
                else
                {
                  v13 = PffDuplicateFileHandle(v19, CurrentProcess, v29, &a6[*a4 - 1]);
                  if ( v13 >= 0 )
                  {
                    memmove(a7, *(const void **)(**((_QWORD **)v19 + 26) + 80LL), 2LL * *((unsigned int *)v19 + 8));
                    a7 += *((unsigned int *)v19 + 8);
                  }
                }
              }
            }
          }
          v19 = SkipInvalidPff(*((struct PFF **)v19 + 1));
        }
        while ( v19 );
        v7 = v26;
      }
      v26 = ++v7;
      v17 = *(_QWORD *)(v31 + 15544);
    }
    while ( v7 < *(_DWORD *)(v17 + 24) );
  }
  SEMOBJ<17>::vUnlock(&v28);
  Gre::AttachProcessObj::Detach(&ApcState);
  if ( v13 < 0 )
  {
    for ( i = 0; i < a2; ++v8 )
    {
      if ( !*v8 )
        break;
      NtClose(*v8);
      ++i;
    }
  }
  SEMOBJ<17>::vUnlock(&v28);
  Gre::AttachProcessObj::~AttachProcessObj((Gre::AttachProcessObj *)&ApcState);
  return (unsigned int)v13;
}
