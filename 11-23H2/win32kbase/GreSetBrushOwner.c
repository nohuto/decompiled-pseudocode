/*
 * XREFs of GreSetBrushOwner @ 0x1C00601D0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C0040440 (HmgIncProcessHandleCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0046E44 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00604A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C0062058 (GreSetBitmapOwnerEx.c)
 *     HmgAllocateObjectAttr @ 0x1C008A91C (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 ObjectAttr; // r12
  __int64 v8; // rcx
  struct OBJECT *v9; // r15
  unsigned int v10; // ebx
  _QWORD *v11; // rcx
  __int64 *v12; // rdx
  _QWORD *v13; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // dl
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  BOOL v20; // r14d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rbx
  __int64 ProcessWow64Process; // rax
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // [rsp+38h] [rbp-80h] BYREF
  int v28; // [rsp+40h] [rbp-78h]
  _QWORD v29[13]; // [rsp+50h] [rbp-68h] BYREF

  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v29, a1);
  if ( v29[0] && (*(_DWORD *)(v29[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
  v6 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore(v5);
  v27 = 0LL;
  v28 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v28 )
  {
    v9 = HANDLELOCK::pObj((HANDLELOCK *)&v27);
    if ( *(_BYTE *)(v27 + 14) == 16
      && *(_WORD *)(v27 + 12) == HIWORD(v3)
      && (!*((_WORD *)v9 + 6) || *((struct _KTHREAD **)v9 + 2) == KeGetCurrentThread()) )
    {
      if ( a2 == -2147483630 || !a2 )
      {
        v10 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
        if ( v10 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          v11 = (_QWORD *)((char *)v9 + 72);
          v12 = (__int64 *)((char *)v9 + 48);
          v13 = (_QWORD *)*((_QWORD *)v9 + 6);
          if ( v13 != (_QWORD *)((char *)v9 + 72) )
          {
            *v11 = *v13;
            ObjectAttr = *v12;
            *v12 = (__int64)v11;
            *(_QWORD *)(v27 + 16) = 0LL;
          }
          HANDLELOCK::Pid((HANDLELOCK *)&v27, a2);
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        }
        else
        {
          if ( (*(_DWORD *)(v27 + 8) & 0xFFFFFFFE) != 0x80000012 )
          {
LABEL_17:
            if ( !v6 )
              goto LABEL_20;
            if ( a2 )
              goto LABEL_20;
            v15 = *((_QWORD *)v9 + 3);
            if ( !v15 )
              goto LABEL_20;
            v16 = 0LL;
LABEL_26:
            GreSetBitmapOwnerEx(v15, v16);
            goto LABEL_20;
          }
          HANDLELOCK::Pid((HANDLELOCK *)&v27, a2);
        }
        v6 = 1;
        goto LABEL_17;
      }
      if ( a2 == -2147483646 )
      {
        v18 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
        v19 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
        if ( (_DWORD)v19 == (_DWORD)v18 || (_DWORD)v19 == -2147483630 || !(_DWORD)v19 )
        {
          v20 = 0;
          v6 = 1;
          if ( (_DWORD)v19 != (_DWORD)v18 )
          {
            v6 = HmgIncProcessHandleCountEx((unsigned int)v18, v17, 0);
            v20 = v6 != 0;
          }
          if ( !v6 )
            goto LABEL_51;
          if ( !*(_QWORD *)(v27 + 16) )
          {
            if ( ObjectAttr )
            {
              *((_QWORD *)v9 + 6) = ObjectAttr;
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
              v22 = CurrentProcessWin32Process;
              if ( CurrentProcessWin32Process )
                v22 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
              if ( !v22 )
                KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
              ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v22);
              v24 = *(unsigned int *)(v22 + 292);
              v25 = *(_DWORD *)(v22 + 292);
              if ( ProcessWow64Process )
                v26 = (unsigned int)__ROR4__(ObjectAttr ^ v24, v25 & 0x1F);
              else
                v26 = __ROR8__(ObjectAttr ^ v24, v25 & 0x3F);
              *(_QWORD *)(v27 + 16) = v26;
              *(_QWORD *)ObjectAttr = *((_QWORD *)v9 + 9);
              ObjectAttr = 0LL;
            }
            else
            {
              v6 = 0;
            }
          }
          if ( !v6 )
          {
LABEL_51:
            if ( v20 )
              HmgDecProcessHandleCount(v18);
            goto LABEL_20;
          }
          HANDLELOCK::Pid((HANDLELOCK *)&v27, v18);
          v15 = *((_QWORD *)v9 + 3);
          if ( v15 )
          {
            v16 = 2147483650LL;
            goto LABEL_26;
          }
        }
      }
    }
LABEL_20:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    if ( v28 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  }
  GreReleaseHmgrSemaphore(v8);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v6;
}
