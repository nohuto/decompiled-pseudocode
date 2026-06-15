/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x1800284DC (--1CDuckingNotification@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18002EB00 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18002FA04 (-AddInterface@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotifica.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18002FF8C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     WPP_SF_Sdi @ 0x180031DA8 (WPP_SF_Sdi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  _UNKNOWN **v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  CDuckingNotification *v12; // rax
  int *v15; // rbx
  ATL::CAtlException *v16; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v17[56]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v18[16]; // [rsp+78h] [rbp-80h] BYREF
  __int128 v19; // [rsp+88h] [rbp-70h]
  __m128i si128; // [rsp+98h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-50h]

  v19 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v19) = 0;
  v21 = 0LL;
  v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdi(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, a3, (_DWORD)a2, a3, a4);
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_BYTE *)this + 400) == 1 )
  {
    v9 = -2147467260;
    goto LABEL_11;
  }
  v9 = CDuckingNotification::Init((CDuckingNotification *)v18, a3, a2, a4);
  if ( v9 < 0 )
    goto LABEL_10;
  try
  {
    v12 = CDuckingNotification::CDuckingNotification(
            (CDuckingNotification *)v17,
            (const struct CDuckingNotification *)v18,
            v10,
            v11);
    v9 = CLockedList_UniqueValuesOnly<CDuckingNotification,0>::AddInterface((char *)this + 64, v12);
  }
  catch ( ATL::CAtlException *v16 )
  {
    v15 = (int *)v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    v9 = *v15;
  }
  if ( v9 < 0 )
  {
LABEL_10:
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_11:
    if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x8000000) != 0 && *((_BYTE *)v8 + 25) >= 2u )
      WPP_SF_d((TRACEHANDLE)v8[2], 0xBu, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, v9);
    AudPolicyLogError("CDuckingManager::AddDuckingNotification", 397, v9);
  }
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v18);
  return (unsigned int)v9;
}
