/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C0060550 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C02DB1F8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C02DB738 (bInitBrush.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0047860 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     HmgAllocateObjectAttr @ 0x1C008A91C (HmgAllocateObjectAttr.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C008B090 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C00A7F48 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00B354C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1C00D14E0 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A28 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v9; // rax
  ULONG_PTR v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  char v17; // r12
  __int64 ObjectAttr; // r15
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rbx
  __int64 ProcessWow64Process; // rax
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // r8
  __int64 v27; // [rsp+38h] [rbp-90h] BYREF
  int v28; // [rsp+40h] [rbp-88h]
  struct BRUSH *v29; // [rsp+50h] [rbp-78h]
  __int64 v30; // [rsp+58h] [rbp-70h]
  __int64 *v31; // [rsp+60h] [rbp-68h]
  _BYTE v33[88]; // [rsp+70h] [rbp-58h] BYREF

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>((char *)this + 16);
  if ( a3 <= 0xC )
  {
    v9 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v10 = (ULONG_PTR)v9;
    v29 = v9;
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 19) = a2;
      *((_DWORD *)v9 + 20) = a3;
      *((_QWORD *)v9 + 3) = 0LL;
      v31 = (__int64 *)((char *)v9 + 48);
      **((_DWORD **)v9 + 6) = 0;
      if ( a3 >= 6 )
      {
        v11 = a3 - 6;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    if ( v16 == 1 )
                      *((_DWORD *)v9 + 10) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v9 + 10) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v9 + 10) = 18;
                }
              }
              else
              {
                *((_DWORD *)v9 + 10) = 21;
              }
            }
            else
            {
              *((_DWORD *)v9 + 10) = 17;
            }
          }
          else
          {
            *((_DWORD *)v9 + 10) = 20;
          }
        }
        else
        {
          *((_DWORD *)v9 + 10) = 16;
        }
      }
      else
      {
        *((_DWORD *)v9 + 10) = 32802;
      }
      v17 = 0;
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v33);
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v33, (struct OBJECT *)v10, 1u, 0, 16) )
      {
        if ( a5 )
        {
          ObjectAttr = HmgAllocateObjectAttr();
          v30 = ObjectAttr;
          if ( ObjectAttr )
          {
            v27 = 0LL;
            v28 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v27, *(struct HOBJ__ **)v10, 0x10u);
            if ( v28 )
            {
              *(_QWORD *)ObjectAttr = *(_QWORD *)(v10 + 72);
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
              v21 = CurrentProcessWin32Process;
              if ( CurrentProcessWin32Process )
                v21 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
              if ( !v21 )
                KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
              ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v21);
              v23 = *(unsigned int *)(v21 + 292);
              v24 = *(_DWORD *)(v21 + 292);
              if ( ProcessWow64Process )
                v25 = (unsigned int)__ROR4__(ObjectAttr ^ v23, v24 & 0x1F);
              else
                v25 = __ROR8__(ObjectAttr ^ v23, v24 & 0x3F);
              *(_QWORD *)(v27 + 16) = v25;
              *v31 = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
            }
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v27);
          }
        }
      }
      else
      {
        v17 = 1;
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v33);
      if ( v17 )
        FreeBrushMemory(v10);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
