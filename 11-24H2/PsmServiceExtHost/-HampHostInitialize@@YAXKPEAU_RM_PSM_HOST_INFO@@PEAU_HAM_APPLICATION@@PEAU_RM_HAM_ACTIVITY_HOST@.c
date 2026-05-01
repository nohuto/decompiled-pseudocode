/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000DC48
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D99C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     CempLockInitialize @ 0x180040B9C (CempLockInitialize.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18005F3FC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$__ea_18005F3FC.c)
 *     ?RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069DAC (-RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void __fastcall HampHostInitialize(
        char a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        struct _RM_HAM_ACTIVITY_HOST *a4)
{
  _OWORD *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1
  unsigned int IsPple; // eax
  int v12; // r9d
  char *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  char *v17; // [rsp+58h] [rbp-10h] BYREF
  char v18; // [rsp+A0h] [rbp+38h] BYREF
  char v19; // [rsp+A8h] [rbp+40h] BYREF
  int v20; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+50h] BYREF

  memset_0(a4, 0, 0x430uLL);
  CempLockInitialize(a4);
  *((_QWORD *)a4 + 77) = (char *)a4 + 608;
  *((_QWORD *)a4 + 76) = (char *)a4 + 608;
  RtlInitializeConditionVariable((char *)a4 + 16);
  RtlInitializeConditionVariable((char *)a4 + 696);
  *((_OWORD *)a4 + 45) = 0LL;
  *((_QWORD *)a4 + 92) = -1LL;
  *(_OWORD *)((char *)a4 + 760) = 0LL;
  *((_QWORD *)a4 + 97) = -1LL;
  *((_QWORD *)a4 + 128) = -1LL;
  *((_QWORD *)a4 + 129) = -1LL;
  *((_QWORD *)a4 + 130) = -1LL;
  *((_QWORD *)a4 + 131) = -1LL;
  v8 = (_OWORD *)((char *)a4 + 24);
  *((_QWORD *)a4 + 83) = *((_QWORD *)a4 + 83) & 0xFFFFFFFFE003FFFFuLL | 0x19940000;
  v9 = 4LL;
  do
  {
    *v8 = *(_OWORD *)a2;
    v8[1] = *((_OWORD *)a2 + 1);
    v8[2] = *((_OWORD *)a2 + 2);
    v8[3] = *((_OWORD *)a2 + 3);
    v8[4] = *((_OWORD *)a2 + 4);
    v8[5] = *((_OWORD *)a2 + 5);
    v8[6] = *((_OWORD *)a2 + 6);
    v8 += 8;
    v10 = *((_OWORD *)a2 + 7);
    a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
    *(v8 - 1) = v10;
    --v9;
  }
  while ( v9 );
  *v8 = *(_OWORD *)a2;
  v8[1] = *((_OWORD *)a2 + 1);
  *((_QWORD *)v8 + 4) = *((_QWORD *)a2 + 4);
  IsPple = RmHamHostIsPple(a4);
  v13 = (char *)a4 + 592;
  *((_QWORD *)a4 + 83) = ((unsigned __int64)IsPple << 57) ^ (*((_QWORD *)a4 + 83) ^ ((unsigned __int64)IsPple << 57)) & 0xFDFFFFFFFFFFFFFFuLL;
  *((_QWORD *)a4 + 102) = 1LL;
  *((_BYTE *)a4 + 592) = (a1 & 2) != 0;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a4 + 99) = a3;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v14 = (unsigned __int64)a4 - 64;
    v17 = (char *)a4 + 24;
    v15 = 552LL;
    if ( a4 )
      v15 = (__int64)a4 + 488;
    v21 = v15;
    v20 = *(_DWORD *)((v14 & -(__int64)(a4 != 0LL)) + 0x26C);
    v18 = *v13;
    v19 = *(_BYTE *)(v14 + 624);
    v16 = *(_QWORD *)(v14 + 32);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v15,
      (unsigned int)&unk_1800D3EF0,
      (_DWORD)v13,
      v12,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v20,
      (__int64)&v21);
  }
}
