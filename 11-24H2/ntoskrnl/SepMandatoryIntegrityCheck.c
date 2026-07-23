/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x14028A540
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x140322B90 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140323290 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(_DWORD *a1, __int64 a2, char a3, __int64 a4, char a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // esi
  char v8; // bp
  char v9; // r15
  int v10; // edi
  __int16 v11; // ax
  unsigned __int16 *v12; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // r13
  __int16 v15; // cx
  __int64 v16; // rax
  _WORD **v17; // rax
  _WORD *v18; // r13
  int v19; // eax
  int v20; // eax
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // r9
  int v23; // ecx
  int v24; // ecx
  char v25; // dl
  __int64 result; // rax
  __int16 v27; // r15
  __int16 v28; // r12
  unsigned int v29; // edx
  char v30; // dl
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned int i; // ecx
  char v35; // r8
  char v36; // al
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v42; // rdx
  char v43; // [rsp+30h] [rbp-68h]
  unsigned __int16 v44; // [rsp+34h] [rbp-64h]
  unsigned __int16 v45; // [rsp+36h] [rbp-62h]
  char v46; // [rsp+38h] [rbp-60h]
  __int64 v47; // [rsp+40h] [rbp-58h]
  PVOID P; // [rsp+50h] [rbp-48h]

  v6 = *(_DWORD *)(a4 + 212);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v47 = a4;
  v10 = 0;
  v43 = 0;
  *(_DWORD *)(a6 + 8) = v6;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_4;
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_4;
    if ( v11 >= 0 )
    {
      v32 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v31 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v31 )
        goto LABEL_4;
      v32 = a2 + v31;
    }
    if ( v32 )
    {
      a2 = *(unsigned __int16 *)(v32 + 4);
      v33 = v32 + 8;
      for ( i = 0; i < (unsigned int)a2; ++i )
      {
        if ( *(_BYTE *)v33 == 17 )
        {
          if ( (*(_BYTE *)(v33 + 1) & 8) != 0 )
            break;
          v40 = *(_DWORD *)(v33 + 4);
          v12 = (unsigned __int16 *)(v33 + 8);
          v46 = v40;
          goto LABEL_5;
        }
        v33 += *(unsigned __int16 *)(v33 + 2);
      }
    }
LABEL_4:
    v12 = (unsigned __int16 *)SepDefaultMandatorySid;
    v46 = 1;
LABEL_5:
    if ( a5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = *(_QWORD *)(a4 + 48);
      v15 = *(_WORD *)(v14 + 26);
      if ( (v15 & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, v14, 0LL, 0LL);
      if ( (v15 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v42 = KeGetCurrentThread();
        if ( CurrentIrql > 1u )
          KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
        if ( (v42->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !CurrentIrql && (v42->MiscFlags & 0x400) == 0 && !v42->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        P = (PVOID)ExpAllocateOwnerEntryForLegacyShim();
        if ( !(unsigned __int8)ExAcquireFastResourceShared(v14, (ULONG_PTR)P)
          || (unsigned __int8)ExIsFastResourceHeldExclusive(v14) )
        {
          ExFreePoolWithTag(P, 0);
        }
      }
      else
      {
        LOBYTE(a2) = 1;
        ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), a2);
      }
      a4 = v47;
    }
    v16 = *(unsigned int *)(a4 + 208);
    if ( (_DWORD)v16 == -1 || (v17 = (_WORD **)(*(_QWORD *)(a4 + 152) + 16 * v16)) == 0LL )
      v18 = SeUntrustedMandatorySid;
    else
      v18 = *v17;
    if ( a5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegionThread();
    }
    v19 = *((unsigned __int8 *)v12 + 1);
    if ( (_BYTE)v19 )
      v20 = *(_DWORD *)&v12[2 * (v19 - 1) + 4];
    else
      v20 = 0;
    *(_DWORD *)(a6 + 12) = v20;
    v21 = *v12;
    v22 = *v18;
    v44 = *v12;
    v45 = *v18;
    if ( *v12 == *v18 )
    {
      if ( !memcmp(v12, v18, 4 * ((unsigned __int64)*v12 >> 8) + 8) )
        goto LABEL_34;
      v21 = v44;
      v22 = v45;
    }
    v23 = *(_DWORD *)(v18 + 1);
    if ( !v23 )
      v23 = (unsigned __int16)v18[3] - 4096;
    if ( v23 )
      goto LABEL_26;
    v24 = *(_DWORD *)(v12 + 1);
    if ( !v24 )
      v24 = v12[3] - 4096;
    if ( v24 )
    {
LABEL_26:
      v25 = 0;
      v7 = -1073741811;
LABEL_27:
      result = v7;
      *(_DWORD *)a6 = v10;
      *(_BYTE *)(a6 + 4) = v25;
      *(_BYTE *)(a6 + 5) = v8;
      *(_BYTE *)(a6 + 6) = v9;
      return result;
    }
    v27 = HIBYTE(v22);
    v28 = HIBYTE(v21);
    if ( v22 != v21 || memcmp(v18, v12, 4LL * HIBYTE(v22) + 8) )
    {
      v29 = (_BYTE)v27 ? *(_DWORD *)&v18[2 * (unsigned __int8)v27 + 2] : 0;
      if ( (_BYTE)v28 && v29 < *(_DWORD *)&v12[2 * (unsigned __int8)v28 + 2] )
      {
        v30 = 0;
        goto LABEL_35;
      }
    }
LABEL_34:
    v30 = 1;
LABEL_35:
    if ( (*(_DWORD *)(a6 + 8) & 1) != 0 && (v8 = 1, v10 = *a1 | ~*a1 & a1[2] | 0x120000, v30) )
    {
      v9 = 1;
      v43 = 1;
      v10 |= a1[3] | 0x11FFFFF;
    }
    else
    {
      v35 = v8;
      v9 = v8;
      v36 = v8;
      if ( !v30 )
      {
        v8 = 0;
        v9 = 0;
        v25 = 0;
        if ( (v46 & 2) == 0 )
          v8 = v36;
        if ( (v46 & 4) == 0 )
          v9 = v35;
        if ( (v46 & 1) != 0 )
          v25 = 0;
        if ( (v46 & 2) != 0 )
        {
          if ( v9 )
            v38 = ~*a1 & a1[2] | 0x100000;
          else
            v38 = 0;
          v10 &= v38 | ~(*a1 | 0x20000);
        }
        if ( (v46 & 4) != 0 )
        {
          if ( v8 )
            v39 = *a1 | 0x20000;
          else
            v39 = 0;
          v10 &= ~(~v39 & (a1[2] & ~*a1 | 0x100000));
        }
        if ( (v46 & 1) != 0 )
        {
          v37 = 0;
          if ( v9 )
            v37 = a1[2] & ~*a1 | 0x100000;
          if ( v8 )
            v37 |= *a1 | 0x20000;
          v10 &= ~(~v37 & (a1[1] | 0x10D0000));
        }
        goto LABEL_39;
      }
    }
    v25 = v43;
LABEL_39:
    if ( _bittest64((const signed __int64 *)(v47 + 72), 0x20u) )
      v10 |= 0x80000u;
    goto LABEL_27;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
