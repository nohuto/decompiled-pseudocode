/*
 * XREFs of xxxSetClassData @ 0x1C008C668
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C008C5A8 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01BDCC0 (xxxSetClassLong.c)
 * Callees:
 *     GetCPD @ 0x1C000ECE4 (GetCPD.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0013354 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00135C0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     ClassLock @ 0x1C00135E8 (ClassLock.c)
 *     DwmGetClassStyle @ 0x1C00214C8 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     AllocateUnicodeString @ 0x1C008F36C (AllocateUnicodeString.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A88FC (MapClientNeuterToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C00A9DA0 (MapClientToServerPfn.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A390 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C013A3A8 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     MapServerToClientPfn @ 0x1C024BFA4 (MapServerToClientPfn.c)
 */

_QWORD *__fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rsi
  struct tagCLS *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // r11d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  _DWORD *v19; // rax
  char v20; // cl
  unsigned __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rcx
  int ClassStyle; // ebx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rax
  _DWORD *v30; // rax
  char v31; // cl
  __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // r8
  unsigned __int64 v43; // r11
  unsigned int v44; // r9d
  _DWORD *v45; // r10
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 CPD; // rax
  __int64 v50; // rax
  _QWORD v51[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v52; // [rsp+40h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-70h] BYREF
  __int128 v54; // [rsp+58h] [rbp-60h] BYREF
  __int128 v55; // [rsp+68h] [rbp-50h] BYREF
  __int64 v56; // [rsp+78h] [rbp-40h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v51, *((_QWORD *)a1 + 17));
  v8 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v54 = 0LL;
  DestinationString = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v12 = *(_QWORD *)v51[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v14 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 32LL), a4);
        v13 = *(_QWORD *)v51[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
        {
          v13 = *(_QWORD *)v51[0];
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 6LL) |= 2u;
        }
      }
      else
      {
        v14 = MapClientNeuterToClientPfn(v12, 0LL, a4);
        if ( v14 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v15 = 2 - (a4 != 0);
        }
      }
      if ( v15 )
      {
        CPD = GetCPD(*(_QWORD *)v51[0], v15 | 0x10u, v14);
        if ( CPD )
          v14 = CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        LOBYTE(v13) = 7;
        v50 = HMValidateHandleNoRip(a3, v13);
        if ( v50 )
          a3 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 32LL) = a3;
      v16 = MapClientToServerPfn(a3);
      if ( v16 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 32LL) = v16;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 6LL) |= 2u;
        goto LABEL_15;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 6LL) &= ~2u;
LABEL_15:
      v8 = (_QWORD *)v14;
      goto LABEL_5;
    case 0xFFFFFFF4:
    case 0xFFFFFFDE:
      goto LABEL_107;
    case 0xFFFFFFE3:
      goto LABEL_104;
    case 0xFFFFFFEC:
      v48 = 87LL;
LABEL_103:
      UserSetLastError(v48);
      goto LABEL_104;
    case 0xFFFFFFEE:
      v43 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 84LL));
      v44 = 0;
      v45 = &gDefaultServerClasses;
      while ( **(_WORD **)(*(_QWORD *)v51[0] + 8LL) != *(_WORD *)(gpsi + 2LL * ((*v45 >> 3) & 0x1F) + 868) )
      {
        ++v44;
        v45 += 12;
        if ( v44 >= 8 )
          goto LABEL_91;
      }
      v46 = *((unsigned int *)&gDefaultServerClasses + 12 * v44 + 6);
      v47 = *(_QWORD *)(*(_QWORD *)v51[0] + 8LL);
      if ( a3 >= v46 )
      {
        *(_DWORD *)(v47 + 84) = v46;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 84LL);
      }
      else
      {
        if ( _bittest16((const signed __int16 *)(v47 + 6), 9u) )
          goto LABEL_102;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 84LL) = 0;
      }
LABEL_91:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 80LL) = a3;
      v8 = (_QWORD *)v43;
      goto LABEL_5;
    case 0xFFFFFFF2:
LABEL_107:
      if ( (unsigned int)ClassLock(*(_QWORD *)v51[0], (__int64)&v55) )
      {
        v8 = xxxSetClassCursor(a1, *(struct tagCLS **)v51[0], v6, a3);
        v9 = *(struct tagCLS **)v51[0];
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v55;
        ClassUnlockWorker(v9);
        goto LABEL_5;
      }
LABEL_102:
      v48 = 5LL;
      goto LABEL_103;
  }
  if ( (_DWORD)v6 != -8 )
  {
    if ( (_DWORD)v6 == -32 )
    {
      v24 = 87LL;
    }
    else
    {
      if ( (int)v6 + 34 >= 0 )
      {
        _mm_lfence();
        v17 = v6;
        v52 = v6;
        if ( byte_1C0319082[v6] )
        {
          v18 = *(_QWORD *)(*(_QWORD *)v51[0] + 56LL);
          if ( v18 != *(_QWORD *)v51[0] )
          {
            if ( v51[0] != gSmartObjNullRef && !--*(_DWORD *)(v51[0] + 8LL) )
            {
              if ( *(_BYTE *)(v51[0] + 12LL) )
              {
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v51[0]);
                v17 = v6;
              }
            }
            if ( v18 )
            {
              v51[0] = *(_QWORD *)(v18 + 128);
              ++*(_DWORD *)(v51[0] + 8LL);
            }
            else
            {
              v51[0] = gSmartObjNullRef;
            }
          }
          v19 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + byte_1C0319082[v17]);
          v20 = byte_1C03190AA[v17];
          if ( v20 == 4 )
          {
            v21 = (unsigned int)*v19;
            *v19 = a3;
            if ( (_DWORD)v6 == -26 && (_DWORD)v21 != (_DWORD)a3 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              DirtyVisRgnTrackers(a1);
              ClassStyle = DwmGetClassStyle((__int64)a1);
              v26 = *(_QWORD *)a1;
              v29 = (void *)ReferenceDwmApiPort(v28, v27);
              DwmAsyncChildStyleChange(v29, v26, -26, ClassStyle);
            }
          }
          else if ( v20 == 8 )
          {
            v21 = *(_QWORD *)v19;
            *(_QWORD *)v19 = a3;
          }
          else
          {
            v21 = *(unsigned __int16 *)v19;
            *(_WORD *)v19 = a3;
          }
          v22 = *(_QWORD *)(*(_QWORD *)v51[0] + 64LL);
          if ( v22 != *(_QWORD *)v51[0] )
          {
            if ( v51[0] != gSmartObjNullRef && !--*(_DWORD *)(v51[0] + 8LL) )
            {
              if ( *(_BYTE *)(v51[0] + 12LL) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v51[0]);
            }
            if ( v22 )
            {
              v51[0] = *(_QWORD *)(v22 + 128);
              ++*(_DWORD *)(v51[0] + 8LL);
            }
            else
            {
              v51[0] = gSmartObjNullRef;
            }
          }
          v23 = v52;
          while ( *(_QWORD *)v51[0] )
          {
            v30 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + byte_1C0319082[v23]);
            v31 = byte_1C03190AA[v23];
            if ( v31 == 4 )
            {
              v21 = (unsigned int)*v30;
              *v30 = a3;
            }
            else if ( v31 == 8 )
            {
              v21 = *(_QWORD *)v30;
              *(_QWORD *)v30 = a3;
            }
            else
            {
              v21 = *(unsigned __int16 *)v30;
              *(_WORD *)v30 = a3;
            }
            v32 = **(_QWORD **)v51[0];
            if ( v32 != *(_QWORD *)v51[0] )
            {
              if ( v51[0] != gSmartObjNullRef && !--*(_DWORD *)(v51[0] + 8LL) )
              {
                if ( *(_BYTE *)(v51[0] + 12LL) )
                  Win32FreeToPagedLookasideList(gpStackRefLookAside, v51[0]);
              }
              if ( v32 )
              {
                v51[0] = *(_QWORD *)(v32 + 128);
                ++*(_DWORD *)(v51[0] + 8LL);
              }
              else
              {
                v51[0] = gSmartObjNullRef;
              }
            }
          }
          v8 = (_QWORD *)v21;
          goto LABEL_5;
        }
      }
      v24 = 1413LL;
    }
    UserSetLastError(v24);
LABEL_5:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v51);
    return v8;
  }
  v33 = *(_QWORD *)(*(_QWORD *)v51[0] + 96LL);
  v34 = *(_QWORD *)(a3 + 16);
  v35 = *(_QWORD *)(v34 + 8);
  if ( (v35 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v40 = *(_QWORD *)v51[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 40LL) = v35;
    *(_QWORD *)(v40 + 96) = v35;
    goto LABEL_78;
  }
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v34 + 8));
  if ( !DestinationString.Length )
  {
    v36 = *(_QWORD *)v51[0];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 40LL) = 0LL;
    *(_QWORD *)(v36 + 96) = 0LL;
LABEL_78:
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( (v33 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v33);
    v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 16LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 16LL) = *(_QWORD *)a3;
    *(_QWORD *)a3 = v41;
    v42 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 24LL);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v42;
    if ( a4 )
      v8 = *(_QWORD **)a3;
    else
      v8 = v42;
    goto LABEL_5;
  }
  if ( (unsigned int)AllocateUnicodeString(&v54, &DestinationString) )
  {
    v37 = *(_QWORD *)v51[0];
    v38 = *((_QWORD *)&v54 + 1);
    v39 = *((_QWORD *)&v54 + 1);
    if ( (*((_QWORD *)&v54 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v39 = -1LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51[0] + 8LL) + 40LL) = v39;
    *(_QWORD *)(v37 + 96) = v38;
    goto LABEL_78;
  }
  *(_QWORD *)(a3 + 16) = 0LL;
LABEL_104:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v51);
  return 0LL;
}
