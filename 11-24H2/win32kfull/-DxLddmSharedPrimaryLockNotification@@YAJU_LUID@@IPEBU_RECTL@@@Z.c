/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x14032460C
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x140325890 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140208B2C (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1403250E0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032AC5C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(struct _LUID a1, int a2, const struct _RECTL *a3)
{
  DWORD LowPart; // ebx
  int v5; // edi
  int v6; // r12d
  Gre::Base *v7; // rcx
  HDEV i; // rcx
  struct _LUID *v10; // rax
  HDEV v11; // r15
  unsigned __int64 v12; // r13
  LONG top; // ecx
  LONG right; // r9d
  struct tagSIZE v15; // rax
  int v16; // r9d
  struct tagSIZE v17; // rax
  int v18; // r10d
  Gre::Base *v19; // rcx
  __int64 ProcessEntry; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  struct _RECTL *v24; // r15
  LONG v25; // eax
  LONG v26; // eax
  LONG bottom; // eax
  HDEV v28; // rax
  HDEV v29; // r14
  HDEV v30; // [rsp+20h] [rbp-60h] BYREF
  int v31; // [rsp+28h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-50h] BYREF
  struct _LUID v33; // [rsp+38h] [rbp-48h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF

  LowPart = a1.LowPart;
  v33 = a1;
  v31 = a2;
  v5 = a2;
  v6 = 0;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v32);
  if ( IsDwmActive(v7) )
  {
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v32);
    return 0LL;
  }
  for ( i = 0LL; ; i = v29 )
  {
    v28 = (HDEV)hdevEnumerateDisplayOnly(i);
    v29 = v28;
    if ( !v28 )
      break;
    v30 = v28;
    if ( ((_DWORD)v28[10] & 0x20400) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v30) )
      {
        if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v30)->LowPart )
        {
          v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v30);
          if ( v33.HighPart == v10->HighPart && *(_DWORD *)(*((_QWORD *)v30 + 321) + 248LL) == v5 )
          {
            GreLockVisRgn(v30);
            GreLockSprite(v30);
            GreLockDisplayDevice(v30);
            v11 = v30 + 654;
            v12 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v34 = 0LL;
            top = a3->top;
            if ( !top && !a3->left && !a3->right && !a3->bottom )
            {
              DWORD2(v34) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v30).cx;
              a3 = (const struct _RECTL *)&v34;
              HIDWORD(v34) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v30) + 4LL);
              goto LABEL_20;
            }
            right = a3->right;
            if ( right <= a3->left
              || a3->bottom <= top
              || a3->left < 0
              || right < 0
              || (v15 = PDEVOBJ::sizl((PDEVOBJ *)&v30), v16 > *(_DWORD *)v15.cx)
              || (v17 = PDEVOBJ::sizl((PDEVOBJ *)&v30), v18 > *(_DWORD *)(*(_QWORD *)&v17 + 4LL)) )
            {
              v6 = -1073741811;
            }
            else
            {
LABEL_20:
              if ( v6 >= 0 )
              {
                ProcessEntry = DxLddmFindProcessEntry(v11, (unsigned int)v12);
                if ( ProcessEntry )
                  goto LABEL_25;
                v21 = Win32AllocPoolZInit(48LL, 1684305988LL);
                ProcessEntry = v21;
                if ( v21 )
                {
                  *(_DWORD *)(v21 + 16) = v12;
                  v22 = *(_QWORD *)v11;
                  if ( *(HDEV *)(*(_QWORD *)v11 + 8LL) != v11 )
                    __fastfail(3u);
                  *(_QWORD *)ProcessEntry = v22;
                  *(_QWORD *)(ProcessEntry + 8) = v11;
                  *(_QWORD *)(v22 + 8) = ProcessEntry;
                  *(_QWORD *)v11 = ProcessEntry;
LABEL_25:
                  ++*(_DWORD *)(ProcessEntry + 20);
                  ++*((_DWORD *)v30 + 658);
                  v23 = *(_DWORD *)(ProcessEntry + 24);
                  if ( v23 != -1 )
                    *(_DWORD *)(ProcessEntry + 24) = v23 + 1;
                  v24 = (struct _RECTL *)(ProcessEntry + 28);
                  if ( *(_DWORD *)(ProcessEntry + 20) == 1 )
                  {
                    *v24 = *a3;
                    *(_DWORD *)(ProcessEntry + 44) = *((_DWORD *)Gre::Base::Globals(v19) + 1070);
                  }
                  else
                  {
                    if ( a3->left < v24->left )
                      v24->left = a3->left;
                    v25 = a3->top;
                    if ( v25 < *(_DWORD *)(ProcessEntry + 32) )
                      *(_DWORD *)(ProcessEntry + 32) = v25;
                    v26 = a3->right;
                    if ( v26 > *(_DWORD *)(ProcessEntry + 36) )
                      *(_DWORD *)(ProcessEntry + 36) = v26;
                    bottom = a3->bottom;
                    if ( bottom > *(_DWORD *)(ProcessEntry + 40) )
                      *(_DWORD *)(ProcessEntry + 40) = bottom;
                  }
                  bSpTearDownSprites(v30, (struct _RECTL *)(ProcessEntry + 28), 1);
                  PDEVOBJ::vSync(
                    (PDEVOBJ *)&v30,
                    (struct _SURFOBJ *)((*((_QWORD *)v30 + 318) + 24LL) & -(__int64)(*((_QWORD *)v30 + 318) != 0LL)),
                    0LL,
                    6u);
                }
                else
                {
                  v6 = -1073741801;
                }
                v5 = v31;
              }
            }
            GreUnlockDisplayDevice(v30);
            GreUnlockSprite(v30);
            GreUnlockVisRgn(v30);
            continue;
          }
        }
      }
    }
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v32);
  return (unsigned int)v6;
}
