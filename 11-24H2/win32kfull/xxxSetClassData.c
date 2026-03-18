/*
 * XREFs of xxxSetClassData @ 0x14007D32C
 * Callers:
 *     xxxSetClassLongPtr @ 0x14007D1D8 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1401FEA14 (xxxSetClassLong.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x14007C1F4 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x14007DF9C (ClassLock.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x14007E370 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B4D18 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetCPD @ 0x1400B4E48 (GetCPD.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x14018A854 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     MapClientToServerPfn @ 0x14019D504 (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1401B1164 (MapClientNeuterToClientPfn.c)
 *     AllocateUnicodeString @ 0x1401E85D0 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x14026B0F8 (MapServerToClientPfn.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned int v10; // r14d
  struct tagCLS *v11; // rbx
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rax
  _DWORD *v21; // rax
  char v22; // cl
  unsigned __int64 v23; // r14
  __int64 i; // rdx
  int v25; // ecx
  _DWORD *v26; // rax
  char v27; // cl
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // r8
  _WORD *v38; // rdx
  __int64 v39; // rcx
  __int64 UserSessionState; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // ecx
  __int64 CPD; // rax
  __int64 v45; // rax
  __int64 v46[2]; // [rsp+38h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-60h] BYREF
  __int128 v48; // [rsp+58h] [rbp-50h] BYREF
  __int128 v49; // [rsp+68h] [rbp-40h] BYREF
  __int64 v50; // [rsp+78h] [rbp-30h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>((__int64)v46, *((_QWORD *)a1 + 17));
  v9 = 0LL;
  v10 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  DestinationString = 0LL;
  if ( (_DWORD)v6 == -12 )
    goto LABEL_2;
  if ( (_DWORD)v6 == -24 )
  {
    v15 = *(_QWORD *)v46[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 6LL) & 1) != 0 )
    {
      v19 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 32LL), a4, v8);
      v16 = *(_QWORD *)v46[0];
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 6LL) &= ~1u;
      if ( a4 )
      {
        v16 = *(_QWORD *)v46[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 6LL) |= 2u;
      }
    }
    else
    {
      v19 = MapClientNeuterToClientPfn(v15, 0LL, a4);
      if ( v19 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 32LL)
        && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v10 = 2 - (a4 != 0);
      }
    }
    if ( v10 )
    {
      CPD = GetCPD(*(_QWORD *)v46[0], v10 | 0x10, v19);
      if ( CPD )
        v19 = CPD;
    }
    if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
    {
      LOBYTE(v16) = 7;
      v45 = HMValidateHandleNoRip(a3, v16, v17, v18);
      if ( v45 )
        a3 = *(_QWORD *)(*(_QWORD *)(v45 + 40) + 16LL);
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 32LL) = a3;
    v20 = MapClientToServerPfn(a3);
    if ( v20 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 32LL) = v20;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 6LL) |= 1u;
    }
    else if ( a4 )
    {
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 6LL) |= 2u;
      goto LABEL_13;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 6LL) &= ~2u;
LABEL_13:
    v9 = v19;
    goto LABEL_4;
  }
  if ( (_DWORD)v6 != -29 )
  {
    switch ( (_DWORD)v6 )
    {
      case 0xFFFFFFDE:
        goto LABEL_2;
      case 0xFFFFFFEC:
        v43 = 87;
LABEL_79:
        UserSetLastError(v43);
        goto LABEL_47;
      case 0xFFFFFFEE:
        v38 = (_WORD *)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 80LL);
        v39 = *(_QWORD *)v46[0];
        v19 = (unsigned int)((_DWORD)v38 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 84LL));
        while ( v10 < 5 )
        {
          UserSessionState = W32GetUserSessionState(v39, v38);
          v39 = *(_QWORD *)v46[0];
          v38 = *(_WORD **)(*(_QWORD *)v46[0] + 8LL);
          if ( *v38 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19928)
                                + 2LL * (((unsigned int)gDefaultServerClasses[12 * v10] >> 3) & 0x1F)
                                + 868) )
          {
            v41 = (unsigned int)dword_14034CD08[12 * v10];
            v42 = *(_QWORD *)(*(_QWORD *)v46[0] + 8LL);
            if ( a3 >= v41 )
            {
              *(_DWORD *)(v42 + 84) = v41;
              LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 84LL);
            }
            else
            {
              if ( _bittest16((const signed __int16 *)(v42 + 6), 9u) )
                goto LABEL_78;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 84LL) = 0;
            }
            break;
          }
          ++v10;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 80LL) = a3;
        goto LABEL_13;
      case 0xFFFFFFF2:
LABEL_2:
        if ( (unsigned int)ClassLock(*(_QWORD *)v46[0], &v49) )
        {
          v9 = xxxSetClassCursor(a1, *(struct tagCLS **)v46[0], v6, a3);
          v11 = *(struct tagCLS **)v46[0];
          v13 = PtiCurrent(v46[0], v12);
          *((_QWORD *)v13 + 48) = v49;
          ClassUnlockWorker(v11);
          goto LABEL_4;
        }
LABEL_78:
        v43 = 5;
        goto LABEL_79;
    }
    if ( (_DWORD)v6 != -8 )
    {
      if ( (_DWORD)v6 == -32 )
      {
        v25 = 87;
      }
      else
      {
        if ( (int)v6 + 34 >= 0 )
        {
          _mm_lfence();
          if ( byte_14035926A[v6] )
          {
            SmartObjStackRefBase<tagCLS>::operator=(v46, *(_QWORD *)(*(_QWORD *)v46[0] + 56LL));
            v21 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + byte_14035926A[v6]);
            v22 = byte_1403561A2[v6];
            if ( v22 == 4 )
            {
              v23 = (unsigned int)*v21;
              *v21 = a3;
              if ( (_DWORD)v6 == -26 && (_DWORD)v23 != (_DWORD)a3 )
                DwmUpdateCloseButton(a1, 1);
            }
            else if ( v22 == 8 )
            {
              v23 = *(_QWORD *)v21;
              *(_QWORD *)v21 = a3;
            }
            else
            {
              v23 = *(unsigned __int16 *)v21;
              *(_WORD *)v21 = a3;
            }
            for ( i = *(_QWORD *)(*(_QWORD *)v46[0] + 64LL); ; i = **(_QWORD **)v46[0] )
            {
              SmartObjStackRefBase<tagCLS>::operator=(v46, i);
              if ( !*(_QWORD *)v46[0] )
                break;
              v26 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + byte_14035926A[v6]);
              v27 = byte_1403561A2[v6];
              if ( v27 == 4 )
              {
                v23 = (unsigned int)*v26;
                *v26 = a3;
              }
              else if ( v27 == 8 )
              {
                v23 = *(_QWORD *)v26;
                *(_QWORD *)v26 = a3;
              }
              else
              {
                v23 = *(unsigned __int16 *)v26;
                *(_WORD *)v26 = a3;
              }
            }
            v9 = v23;
            goto LABEL_4;
          }
        }
        v25 = 1413;
      }
      UserSetLastError(v25);
LABEL_4:
      SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v46);
      return v9;
    }
    v28 = *(_QWORD *)(*(_QWORD *)v46[0] + 96LL);
    v29 = *(_QWORD *)(a3 + 16);
    v30 = *(_QWORD *)(v29 + 8);
    if ( (v30 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v35 = *(_QWORD *)v46[0];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 40LL) = v30;
      *(_QWORD *)(v35 + 96) = v30;
      goto LABEL_52;
    }
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v29 + 8));
    if ( !DestinationString.Length )
    {
      v31 = *(_QWORD *)v46[0];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 40LL) = 0LL;
      *(_QWORD *)(v31 + 96) = 0LL;
LABEL_52:
      *(_QWORD *)(a3 + 16) = 0LL;
      if ( (v28 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Win32FreePool((void *)v28);
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 16LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 16LL) = *(_QWORD *)a3;
      *(_QWORD *)a3 = v36;
      v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 24LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v37;
      if ( a4 )
        v9 = *(_QWORD *)a3;
      else
        v9 = v37;
      goto LABEL_4;
    }
    if ( (unsigned int)AllocateUnicodeString(&v48, &DestinationString) )
    {
      v32 = *(_QWORD *)v46[0];
      v33 = *((_QWORD *)&v48 + 1);
      v34 = *((_QWORD *)&v48 + 1);
      if ( (*((_QWORD *)&v48 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
        v34 = -1LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 8LL) + 40LL) = v34;
      *(_QWORD *)(v32 + 96) = v33;
      goto LABEL_52;
    }
    *(_QWORD *)(a3 + 16) = 0LL;
  }
LABEL_47:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v46);
  return 0LL;
}
