/*
 * XREFs of ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEAPEAUIDeviceGraphConnectionBuffer@@@Z @ 0x14002F810
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14002EB28 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConnectionInstance::CreateConnectionBuffer(
        CConnectionInstance *this,
        struct IDeviceGraphConnectionBuffer **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // edi
  __int64 v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  int *v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_OWORD *)v11 = 0LL;
  v11[0] = *((_DWORD *)this + 10);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 16LL))(v4, &v11[2]);
    if ( v9 < 0 )
    {
      v10 = 109LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  else
  {
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 8LL))(v5, &v11[2]);
      if ( v9 < 0 )
      {
        v10 = 113LL;
        goto LABEL_12;
      }
    }
  }
  v12 = v11;
  v13 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *, struct IDeviceGraphConnectionBuffer **))(**((_QWORD **)this + 6) + 40LL))(
         *((_QWORD *)this + 6),
         v11,
         a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v6);
    if ( *(_QWORD *)&v11[2] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v11[2] + 16LL))(*(_QWORD *)&v11[2]);
    return v7;
  }
  else
  {
    if ( *(_QWORD *)&v11[2] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v11[2] + 16LL))(*(_QWORD *)&v11[2]);
    return 0LL;
  }
}
