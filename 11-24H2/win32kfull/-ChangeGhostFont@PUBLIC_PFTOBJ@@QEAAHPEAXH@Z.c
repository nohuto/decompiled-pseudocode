/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030DA70
 * Callers:
 *     ?GreChangeGhostFont@@YAHPEAXH@Z @ 0x14032632C (-GreChangeGhostFont@@YAHPEAXH@Z.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B6EEC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401B77CC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(PUBLIC_PFTOBJ *this, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v8; // r15d
  unsigned int CurrentThreadId; // r12d
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  unsigned int v13; // r9d
  __int64 v14; // r10
  struct PFF **v15; // rcx
  struct PFF *i; // rcx
  __int64 j; // rcx
  int v18; // edx
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  struct PFF *v22; // rax
  struct PFF *v23; // r11
  struct PFF *v24; // r8
  HSEMAPHORE v25; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  result = PFTOBJ::bIsPrivatePFT(this, a2, a3);
  if ( (_DWORD)result )
  {
    v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v12 = *(_QWORD *)(W32GetSessionState(v11, v10) + 96);
    SEMOBJ<17>::SEMOBJ<17>(&v25, v12 + 4872);
    GetPFFFromId(*(struct PFT **)(v12 + 20408), v4, 0LL);
    v13 = 0;
    v14 = 40LL;
    do
    {
      if ( v6 )
        break;
      v15 = (struct PFF **)(v14 + *(_QWORD *)this);
      if ( v15 )
      {
        for ( i = *v15; ; i = (struct PFF *)*((_QWORD *)v24 + 1) )
        {
          v22 = SkipInvalidPff(i);
          v24 = v22;
          if ( !v22 )
            break;
          if ( v23 == v22 )
          {
            for ( j = *((_QWORD *)v22 + 19); j; j = *(_QWORD *)(j + 16) )
            {
              v18 = *(_DWORD *)(j + 8);
              v19 = *(_DWORD *)(j + 12);
              if ( (v18 & 4) != 0 )
                v20 = v19 == CurrentThreadId;
              else
                v20 = v19 == v8;
              if ( v20 )
              {
                v21 = *(_DWORD *)(j + 4);
                if ( v3 )
                {
                  v6 = 1;
                  *(_DWORD *)(j + 4) = v21 + 1;
                  *(_DWORD *)(j + 8) = v18 | 0x40;
                  goto LABEL_22;
                }
                if ( v21 )
                {
                  *(_DWORD *)(j + 4) = v21 - 1;
                  *(_DWORD *)(j + 8) = v18 & 0xFFFFFFBF;
                }
                break;
              }
            }
          }
        }
      }
LABEL_22:
      ++v13;
      v14 += 8LL;
    }
    while ( v13 < 0x14 );
    SEMOBJ<17>::vUnlock(&v25);
    return v6;
  }
  return result;
}
