/*
 * XREFs of ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z @ 0x180096AA0 (-GetMessageData@AlpcMessage@@QEBA_K_KPEAX@Z.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x18009BF44 (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18010D54C (-AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z.c)
 *     ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x18010D878 (-AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z.c)
 *     ?Complete@AlpcMessage@@QEAAJPEAX@Z @ 0x18010D9C4 (-Complete@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z @ 0x18010EB00 (-DiscardAttributes@AlpcMessage@@QEAAJPEAX@Z.c)
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x18010EB60 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z @ 0x18010ED14 (-DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z.c)
 *     ?FindSection@SipcPort@@IEAAPEAVSipcSection@@AEBVSipcSectionId@@@Z @ 0x18010ED80 (-FindSection@SipcPort@@IEAAPEAVSipcSection@@AEBVSipcSectionId@@@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1801101A0 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

int __fastcall AlpcPort::GetPortEvent(AlpcPort *this, struct SipcPortEvent *a2)
{
  char *v3; // rsi
  char *v5; // r14
  int v6; // eax
  int result; // eax
  signed int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  struct SipcSection *Section; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // r14d
  void *v19; // r9
  unsigned __int64 v20; // r8
  void *v21; // rdx
  __int64 v22; // rsi
  unsigned int v23; // ecx
  struct AlpcSection *v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+84h] [rbp-7Ch]
  __int128 v31; // [rsp+94h] [rbp-6Ch]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  char v34[68]; // [rsp+C0h] [rbp-40h] BYREF
  char v35[76]; // [rsp+104h] [rbp+4h] BYREF

  v3 = (char *)this + 56;
  v5 = (char *)this + 424;
  while ( 1 )
  {
    while ( 1 )
    {
      v27 = 368LL;
      v26 = 0LL;
      *(_OWORD *)v3 = 0LL;
      *((_OWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 46) = 0LL;
      *((_WORD *)v3 + 1) = 40;
      *((_DWORD *)v3 + 92) = 1610612736;
      v6 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 6), 0LL, 0LL, 0LL, v3, &v27, v5, &v26);
      if ( v6 )
      {
        *(_DWORD *)a2 = 0;
        if ( v6 == 258 || v6 == -1073741823 )
          return 1;
        v23 = v6 | 0x90000000;
        result = 1;
        if ( *((_QWORD *)this + 6) )
          return v23;
        return result;
      }
      v8 = *((__int16 *)this + 30) & 0xFFFF00FF;
      if ( v8 <= 7 )
        break;
      v13 = v8 - 8;
      if ( !v13 )
        goto LABEL_21;
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_21;
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 2 )
          goto LABEL_21;
      }
      else
      {
        v33 = 0LL;
        memset_0(v34, 0, sizeof(v34));
        memset_0(v35, 0, 0x44uLL);
        if ( AlpcMessage::GetMessageData((AlpcMessage *)v3, 0xC8uLL, v29) == 200 && v29[0] == 2 )
        {
          v16 = v30;
          *(_DWORD *)a2 = 2;
          v17 = v31;
          *(_OWORD *)((char *)a2 + 8) = v16;
          *(_OWORD *)((char *)a2 + 24) = v17;
          *((_DWORD *)a2 + 10) = *((_DWORD *)this + 16);
          *((_DWORD *)a2 + 11) = *((_DWORD *)this + 18);
          *((_QWORD *)a2 + 6) = v32;
          *((_BYTE *)a2 + 56) = v29[2];
          *((_BYTE *)a2 + 57) = v29[3];
          return 0;
        }
        AlpcPort::RejectClientConnection(this);
      }
    }
    if ( v8 == 7 )
      goto LABEL_21;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_21;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_21;
    v11 = v10 - 1;
    if ( v11 )
      break;
    if ( (*((_DWORD *)this + 107) & 0x40000000) != 0 )
    {
      v18 = AlpcMessage::Complete((AlpcMessage *)v3, *((void **)this + 6));
      if ( v18 >= 0 )
      {
        v25 = 0LL;
        if ( AlpcMessage::GetMessageData((AlpcMessage *)v3, 8uLL, &v25) == 8 )
        {
          *((_DWORD *)this + 107) &= ~0x40000000u;
          v19 = (void *)*((_QWORD *)this + 6);
          v20 = *((_QWORD *)this + 57);
          v21 = (void *)*((_QWORD *)this + 56);
          v24 = 0LL;
          result = AlpcSection::AttachOrUnmap(this, v21, v20, v19, v25, &v24);
          if ( result < 0 )
            return result;
          SipcPort::AddReceivedSection(this, v24, a2);
          return 0;
        }
        v18 = -2147024809;
      }
      AlpcMessage::DiscardAttributes((AlpcMessage *)v3, *((void **)this + 6));
      *(_DWORD *)a2 = 0;
      return v18;
    }
    if ( (*((_WORD *)this + 30) & 0x2000) != 0 )
      AlpcMessage::Cancel((AlpcMessage *)v3, *((void **)this + 6));
    memset(v28, 0, sizeof(v28));
    if ( AlpcMessage::GetMessageData((AlpcMessage *)v3, 0x20uLL, v28) == 32 )
    {
      Section = SipcPort::FindSection(this, (const struct SipcSectionId *)v28);
      if ( Section )
        SipcPort::DisconnectSection(this, Section);
    }
  }
  if ( (unsigned int)(v11 - 1) > 1 )
  {
LABEL_21:
    if ( (*((_WORD *)this + 30) & 0x2000) != 0 )
      AlpcMessage::Cancel((AlpcMessage *)v3, *((void **)this + 6));
    *(_DWORD *)a2 = 1;
    *((_DWORD *)a2 + 2) = *((__int16 *)this + 30) & 0xFFFF00FF;
    return -2147418113;
  }
  else
  {
    v22 = 0LL;
    if ( (*((_DWORD *)this + 107) & 0x20000000) == 0 )
      goto LABEL_39;
    v22 = *((_QWORD *)this + 58);
    if ( v22 == *((_QWORD *)this + 6) )
    {
      v22 = 0LL;
      goto LABEL_39;
    }
    if ( !v22 )
LABEL_39:
      AlpcPort::Disconnect(this);
    *(_DWORD *)a2 = 3;
    *((_QWORD *)a2 + 1) = v22;
    return 0;
  }
}
