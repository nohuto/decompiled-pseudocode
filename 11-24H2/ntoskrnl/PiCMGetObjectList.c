/*
 * XREFs of PiCMGetObjectList @ 0x1408BB9D0
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     _PnpGetObjectList @ 0x1408BB7D0 (_PnpGetObjectList.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetObjectList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  _DWORD *v6; // r13
  unsigned int v7; // edi
  void *Pool2; // rsi
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // edi
  int ObjectList; // eax
  unsigned int v18; // r10d
  int v19; // eax
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v6 = (_DWORD *)a6;
  v7 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  v21 = 0LL;
  v23 = 0LL;
  Pool2 = 0LL;
  *(_OWORD *)P = 0LL;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, &v21);
  if ( v11 < 0 )
    goto LABEL_26;
  if ( P[0] || LODWORD(P[1]) || __PAIR64__(HIDWORD(P[1]), 0) != DWORD1(v21) || !a3 || a4 < 0x14 )
    goto LABEL_34;
  v14 = DWORD2(v21);
  v15 = 6;
  if ( SDWORD2(v21) > 6 )
  {
    v14 = (unsigned int)(DWORD2(v21) - 65537);
    if ( DWORD2(v21) == 65537 )
    {
      v15 = 7;
    }
    else
    {
      v14 = (unsigned int)(DWORD2(v21) - 65538);
      if ( DWORD2(v21) == 65538 )
      {
        v15 = 8;
      }
      else
      {
        v14 = (unsigned int)(DWORD2(v21) - 65539);
        if ( DWORD2(v21) == 65539 )
        {
          v15 = 9;
        }
        else
        {
          v14 = (unsigned int)(DWORD2(v21) - 65540);
          if ( DWORD2(v21) == 65540 )
          {
            v15 = 10;
          }
          else
          {
            if ( DWORD2(v21) != 65541 )
              goto LABEL_34;
            v15 = 11;
          }
        }
      }
    }
    if ( PiDrvDbCtx )
      goto LABEL_14;
LABEL_34:
    v18 = -1073741811;
    goto LABEL_23;
  }
  if ( DWORD2(v21) != 6 )
  {
    if ( DWORD2(v21) == 1 )
    {
      v18 = -1073741637;
      goto LABEL_23;
    }
    v14 = (unsigned int)(DWORD2(v21) - 2);
    if ( DWORD2(v21) == 2 )
    {
      v15 = 2;
      goto LABEL_14;
    }
    v14 = (unsigned int)(DWORD2(v21) - 3);
    if ( DWORD2(v21) == 3 )
    {
      v15 = 4;
      goto LABEL_14;
    }
    v14 = (unsigned int)(DWORD2(v21) - 4);
    if ( DWORD2(v21) == 4 )
    {
      v15 = 3;
      goto LABEL_14;
    }
    if ( DWORD2(v21) == 5 )
    {
      v15 = 5;
      goto LABEL_14;
    }
    goto LABEL_34;
  }
LABEL_14:
  if ( a4 - 20 >= 2 )
    v7 = a4 - 20;
  if ( v7 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v7, 0x34706E50u);
    if ( !Pool2 )
    {
      v18 = -1073741670;
      goto LABEL_23;
    }
    v16 = v7 >> 1;
  }
  else
  {
    v16 = 0;
  }
  LODWORD(a6) = v16;
  ObjectList = PnpGetObjectList(v14, v15, v12, v13, (__int64)Pool2, v16, (__int64)&a6, 0);
  v18 = ObjectList;
  if ( ObjectList >= 0 )
  {
    v19 = PiCMReturnBufferResultData(
            (unsigned int)ObjectList,
            (unsigned int)(2 * a6),
            0LL,
            Pool2,
            2 * (int)a6,
            v23,
            a3,
            a4,
            v6);
    goto LABEL_24;
  }
LABEL_23:
  v19 = PiCMReturnBufferResultData(v18, (unsigned int)(2 * a6), 0LL, 0LL, 0, v23, a3, a4, v6);
LABEL_24:
  v11 = v19;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_26:
  if ( P[0] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v11;
}
